# Autor: Marcelo Paiva
# Data: 17/10/2017
# Objetivo: Integracao do CDS SCADE R18 (Erlun Control), Kafka (via socket),
#           camera do celular Android e controle do robo Erlun

import sys
from kafka import KafkaConsumer
from kafka import KafkaClient, SimpleProducer
import base64
import urllib
import cv2
import numpy as np
import time
import subprocess
import os, signal

# user:passwd@IP:port of Android IP Webcam App
url='http://user:passwd@192.168.10.1:8080/shot.jpg'

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 1:
        print("Usage: kafkaConsumer.py")
        exit(-1)

    # Inicializa variaveis
    b_cmd = "stampsnet.hashtagsource.com:9092"
    t_cmd = "erlun"
    b_photo = "stampsnet.hashtagsource.com:9092"
    t_photo = "erlunPhoto"
    
    # Conecta no servidor Kafka (Consumer)
    consumer = KafkaConsumer(bootstrap_servers=b_cmd)

    # Acessa o topico
    consumer.subscribe([t_cmd])

    # Conecta no servidor Kafka (Producer)
    kafkaServer = KafkaClient(b_photo)
    producer = SimpleProducer(kafkaServer)


    # Imprime somente as mensagens novas
    for message in consumer:


        # Abre janela com camera
        if message.value == "T":     
            p = subprocess.Popen(["camAndroid.py"], shell = True)


        # Fecha janela com camera
        if message.value == "F":     
            subprocess.call(['taskkill', '/F', '/T', '/PID', str(p.pid)])


        # Tira foto e envia para o Kafka, topico erlunPhoto
        if message.value == "P":
            print (message.value)
            # Use urllib to get the image from the Android IP Webcam App
            imgResp = urllib.urlopen(url)  
            # Numpy to convert into a array
            imgNp = np.array(bytearray(imgResp.read()),dtype=np.uint8)   
            # Finally decode the array to OpenCV usable format
            img = cv2.imdecode(imgNp,-1)
            # Pesquisar depois: MessageSizeTooLargeError
            cv2.imwrite("imgTemp.jpg",img)
            img = open("imgTemp.jpg", "rb").read()
            os.remove("imgTemp.jpg")
            # Converte para base64      
            imgBase64 = base64.b64encode(img)
            # Envia mensagem para o Kafka
            producer.send_messages(t_photo, imgBase64)

        # Outros comandos
        if message.value == "U":
            print ("U - Up")
        if message.value == "D":
            print ("D - Down")
        if message.value == "L":
            print ("L - Left")
        if message.value == "R":
            print ("R - Right")
        if message.value == "0.0":
            print ("Speed 0.0")
        if message.value == "1.0":
            print ("Speed 1.0")
        if message.value == "2.0":
            print ("Speed 2.0")
        if message.value == "3.0":
            print ("Speed 3.0")
        if message.value == "4.0":
            print ("Speed 4.0")
        if message.value == "5.0":
            print ("Speed 5.0")
        if message.value == "6.0":
            print ("Speed 6.0")
        if message.value == "7.0":
            print ("Speed 7.0")
        if message.value == "8.0":
            print ("Speed 8.0")
        if message.value == "9.0":
            print ("Speed 9.0")

        if message.value == "q": break

    cap.release()
    cv2.destroyAllWindows()
            

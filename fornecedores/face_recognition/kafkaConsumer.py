# Autor: Marcelo Paiva
# Data: 10/10/2017
# Objetivo: Escutar o Kafka no topico erlunPhoto, decodificar
#           mesagem base64 e salvar imagem como imgSaida.jpg

import sys
from kafka import KafkaConsumer
import base64
import requests

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 1:
        print("Usage: kafkaConsumer.py")
        exit(-1)
        
    # Inicializa variaveis
    broker = "stampsnet.hashtagsource.com"
    topico = "erlunPhoto"

    # Conecta no servidor Kafka
    consumer = KafkaConsumer(bootstrap_servers=broker)

    # Acessa o topico
    consumer.subscribe([topico])

    # Imprime somente as mensagens novas no formato base64
    # Decodifica mensagem e salva imagem como imgSaida.jpg
    i = 0
    for message in consumer:
        i += 1
        img = open("imgSaida"+str(i)+".jpg", "wb")
        img.write(message.value.decode('base64'))
        img.close()
        r = requests.post("http://172.17.0.1:8000/process_file", file=open('imgSaida'+str(i)+'.jpg', 'rb'))
        print (r)

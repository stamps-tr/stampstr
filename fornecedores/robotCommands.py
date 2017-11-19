#!/usr/bin/env python3
import sys
from kafka import KafkaConsumer
from kafka import KafkaClient, SimpleProducer
import base64
import subprocess
import os, signal
from ev3dev.ev3 import *

# attach large motors to ports B and C, medium motor to port A
motor_left = LargeMotor('outB')
motor_right = LargeMotor('outC')
motor_a = MediumMotor('outA')
spd = 450
INC_SPEED = 60

def inc(sped):
   if sped<=900:
      sped+=50
   return sped

def dec(sped):
   if sped>50:
      sped-=50
   return sped

#==============================================

# def getch():
#     fd = sys.stdin.fileno()
#     old_settings = termios.tcgetattr(fd)
#     tty.setcbreak(fd)
#     ch = sys.stdin.read(1)
#     termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    
#     return ch

#==============================================

def fire():
   motor_a.run_timed(time_sp=3000, speed_sp=600)

#==============================================

def forward():
   motor_left.run_forever(speed_sp=spd)
   motor_right.run_forever(speed_sp=spd)

#==============================================

def back():
   motor_left.run_forever(speed_sp=-spd)
   motor_right.run_forever(speed_sp=-spd)

#==============================================

def left():
   motor_left.run_forever(speed_sp=-spd)
   motor_right.run_forever(speed_sp=spd)

#==============================================

def right():
   motor_left.run_forever(speed_sp=spd)
   motor_right.run_forever(speed_sp=-spd)

#==============================================

def stop():
   motor_left.run_forever(speed_sp=0)
   motor_right.run_forever(speed_sp=0)

#==============================================

def set_speed(spd):
    spd_target = INC_SPEED*spd
    motor_left.run_forever(speed_sp=spd_target)
    motor_right.run_forever(speed_sp=spd_target)

#==============================================

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 1:
        print("Usage: robotCommands.py")
        exit(-1)

    # Inicializa variaveis
    b_cmd = "stampsnet.hashtagsource.com"
    t_cmd = "erlun"
    b_photo = "stampsnet.hashtagsource.com"
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
        print(message.value)
        command = message.value.decode("utf-8") 
        print(command)
        # Tira foto e envia para o Kafka, topico erlunPhoto
        if command == "P":
            # Tira foto e aguarda o fim do processo
            proc = subprocess.Popen(["fswebcam", "image.jpg"])
            proc.wait()
            # Abre a imagem
            img = open("image.jpg", "rb").read()
            # Converte para base64      
            imgBase64 = base64.b64encode(img)
            # Envia a foto para o Kafka
            producer.send_messages(t_photo, imgBase64)
            # Apaga a foto
            os.remove("image.jpg")

        # Outros comandos
        if command == "U":
            print ("U - Up")
            forward()
        if command == "D":
            print ("D - Down")
            back()
        if command == "L":
            print ("L - Left")
            left()
        if command == "R":
            print ("R - Right")
            right()
        if command == "0.0":
            print ("Speed 0.0")
            stop()
        if command == "1.0":
            print ("Speed 1.0")
            set_speed(1)
        if command == "2.0":
            print ("Speed 2.0")
            set_speed(2)
        if command == "3.0":
            print ("Speed 3.0")
            set_speed(3)
        if command == "4.0":
            print ("Speed 4.0")
            set_speed(4)
        if command == "5.0":
            print ("Speed 5.0")
            set_speed(5)
        if command == "6.0":
            print ("Speed 6.0")
            set_speed(6)
        if command == "7.0":
            print ("Speed 7.0")
            set_speed(7)
        if command == "8.0":
            print ("Speed 8.0")
            set_speed(8)
        if command == "9.0":
            print ("Speed 9.0")
            set_speed(9)

        if command == "X": 
            exit(-1)
        if command == "Q": 
            stop()
            break

    exit(-1)    
            

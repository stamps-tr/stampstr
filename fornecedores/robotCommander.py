# Autor: Marcelo Paiva
# Data: 06/10/2017
# Objetivo: Enviar mensagem para o Kafka no topico: erlun

import sys
import termios, tty
from kafka import KafkaClient, SimpleProducer

def getch():
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    tty.setcbreak(fd)
    ch = sys.stdin.read(1)
    termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    return ch

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 1:
        print("Usage: kafkaCommander.py")
        exit(-1)

    # Inicializa variaveis
    broker = "stampsnet.hashtagsource.com"
    topico = "erlun"

    # Conecta no servidor Kafka
    kafkaServer = KafkaClient(broker)
    producer = SimpleProducer(kafkaServer)

    while True:
        mensagem = getch()
        print(mensagem)
        # Python 3
        if str(type(mensagem)) != "<type 'str'>":
            mensagem = bytes(mensagem, "utf-8")
        # Envia mensagem para o Kafka
        producer.send_messages(topico, mensagem)

# Autor: Marcelo Paiva
# Data: 06/10/2017
# Objetivo: Enviar mensagem para o Kafka no topico: erlun

import sys
from kafka import KafkaClient, SimpleProducer

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 2:
        print("Usage: kafkaProducer.py <mensagem>")
        exit(-1)

    # Inicializa variaveis
    broker = "stampsnet.hashtagsource.com:9092"
    topico = "erlun"
    mensagem = sys.argv[1]

    # Conecta ao servidor kafka-broker (spark -> kafka)
    kafkaServer = KafkaClient(broker)
    producer = SimpleProducer(kafkaServer)

    # Converte mensagem para bytes utf-8
    mensagemByte = bytes(mensagem, "utf-8")

    # Envia mensagem para o Kafka
    producer.send_messages(topico, mensagemByte)

# Autor: Marcelo Paiva
# Data: 06/10/2017
# Objetivo: Escutar o Kafka no topico: erlun

import sys
from kafka import KafkaConsumer

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 1:
        print("Usage: kafkaConsumer.py")
        exit(-1)

    # Inicializa variaveis
    broker = "stampsnet.hashtagsource.com:9092"
    topico = "erlun"

    # Conecta ao servidor
    consumer = KafkaConsumer(bootstrap_servers=broker)

    # Acessa o topico
    consumer.subscribe([topico])

    # Imprime somente as mensagens novas
    for message in consumer:
        print (message.value)

# Autor: Marcelo Paiva
# Data: 10/10/2017
# Objetivo: Escutar o Kafka no topico erlunPhoto, decodificar
#           mesagem base64 e salvar imagem como imgSaida.jpg

import sys
from kafka import KafkaConsumer
import base64

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 1:
        print("Usage: kafkaConsumer.py")
        exit(-1)
        
    # Inicializa variaveis
    broker = "stampsnet.hashtagsource.com:9092"
    topico = "erlunPhoto"

    # Conecta no servidor Kafka
    consumer = KafkaConsumer(bootstrap_servers=broker)

    # Acessa o topico
    consumer.subscribe([topico])

    # Imprime somente as mensagens novas no formato base64
    # Decodifica mensagem e salva imagem como imgSaida.jpg
    for message in consumer:
        img = open("imgSaida.jpg", "wb")
        img.write(message.value.decode('base64'))
        img.close()
        print (message.value)

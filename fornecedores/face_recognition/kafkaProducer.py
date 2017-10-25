# Autor: Marcelo Paiva
# Data: 10/10/2017
# Objetivo: Abre imagem imgEntrada.jpg, converte para base64
#           e envia para o Kafka no topico erlunPhoto

import sys
from kafka import KafkaClient, SimpleProducer
import base64

# Programa principal
if __name__ == "__main__":

    # Help
    if len(sys.argv) != 1:
        print("Usage: kafkaProducer.py")
        exit(-1)

    # Abre imagem e converte para base64
    img = open("imgEntrada.jpg", "rb").read()
    imgBase64 = base64.b64encode(img)

    # Inicializa variaveis
    broker = "stampsnet.hashtagsource.com"
    topico = "erlunPhoto"
    
    # Conecta no servidor Kafka
    kafkaServer = KafkaClient(broker)
    producer = SimpleProducer(kafkaServer)

    # Envia mensagem para o Kafka
    producer.send_messages(topico, imgBase64)

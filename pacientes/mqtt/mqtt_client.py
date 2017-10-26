# -*- coding: cp1252 -*-
import paho.mqtt.client as mqtt

batimentos = [1200, 1400, 1600, 1800, 2000]

# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    print("Connected with result code "+str(rc))

    # Subscribing in on_connect() means that if we lose the connection and
    # reconnect then subscriptions will be renewed.
    client.subscribe("stamps")

# The callback for when a PUBLISH message is received from the server.
def on_message(client, userdata, msg):
    batimentos.pop(0)
    batimento = int(msg.payload)
    scaled = ((batimento - 50.0)/(150.0 - 50.0))*(6000 - 100) + 100
    batimentos.append(int(scaled))
    file = open("C:\\Users\\victo\\SCADE\\batimentos.txt","w")
    for x in batimentos:
        file.write(str(x) + " ")
    file.close() 
    print(msg.topic+" "+str(msg.payload))


print("Creating client")
client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
print("trying to connect")
client.connect("test.mosquitto.org", 1883, 60)
print("connected")

# Blocking call that processes network traffic, dispatches callbacks and
# handles reconnecting.
# Other loop*() functions are available that give a threaded interface and a
# manual interface.
client.loop_forever()

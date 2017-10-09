#!/usr/bin/env python

# Autor: Marcelo Paiva
# Data: 09/10/2017
# Objective: Using Android IP Webcam App

import urllib
import cv2
import numpy as np
import time

# haarcascade
body_cascade = cv2.CascadeClassifier('cascade\\haarcascade_fullbody.xml')
upperbody_cascade = cv2.CascadeClassifier('cascade\\haarcascade_upperbody.xml')
lowerbody_cascade = cv2.CascadeClassifier('cascade\\haarcascade_lowerbody.xml')
face_cascade = cv2.CascadeClassifier('cascade\\haarcascade_frontalface_default.xml')
eye_cascade = cv2.CascadeClassifier('cascade\\frontalEyes.xml')

# user:passwd@IP:port of Android IP Webcam App
url='http://user:passwd@192.168.10.1:8080/shot.jpg'

# Detect people: body, upperbody, lowerbody, face and eyes
def detect(image):
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    
    bodies = body_cascade.detectMultiScale(gray, 1.3, 5)
    for (x,y,w,h) in bodies:
        cv2.rectangle(image,(x,y),(x+w,y+h),(0,0,255),2)

    upperbodies = upperbody_cascade.detectMultiScale(gray, 1.3, 5)
    for (x,y,w,h) in upperbodies:
        cv2.rectangle(image,(x,y),(x+w,y+h),(0,255,255),2)

    lowerbodies = lowerbody_cascade.detectMultiScale(gray, 1.3, 5)
    for (x,y,w,h) in lowerbodies:
        cv2.rectangle(image,(x,y),(x+w,y+h),(0,255,255),2)
        
    faces = face_cascade.detectMultiScale(gray, 1.3, 5)
    for (x,y,w,h) in faces:
        cv2.rectangle(image,(x,y),(x+w,y+h),(255,0,0),2)
        roi_gray = gray[y:y+h, x:x+w]
        roi_color = image[y:y+h, x:x+w]
        eyes = eye_cascade.detectMultiScale(roi_gray)
        for (ex,ey,ew,eh) in eyes:
            cv2.rectangle(roi_color,(ex,ey),(ex+ew,ey+eh),(0,255,0),2)
        
    return image

while True:      
    # Use urllib to get the image from the Android IP Webcam App
    imgResp = urllib.urlopen(url)
    
    # Numpy to convert into a array
    imgNp = np.array(bytearray(imgResp.read()),dtype=np.uint8)
    
    # Finally decode the array to OpenCV usable format
    img = cv2.imdecode(imgNp,-1)

    # Write photo.jpg if 'a' is pressed
    if cv2.waitKey(1) & 0xFF == ord('a'):
        cv2.imwrite("photo.jpg",img)
        
    # Detect people: body, upperbody, lowerbody, face and eyes
    image_faces = detect(img)

    # Put the image on screen
    cv2.imshow('Face detect',image_faces)
        
    #To give the processor some less stress
    #time.sleep(0.1) 

    # Quit if 'q' is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break


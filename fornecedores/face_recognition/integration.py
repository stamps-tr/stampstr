#!/usr/bin/env python2
from flask import Flask, url_for
from flask import request
from flask import json
from flask import Response
import os
import openface
import time
import cv2


#Carregamento da estrutura utilizada para processamento do openface
fileDir = os.path.dirname(os.path.realpath(__file__))
modelDir = os.path.join(fileDir, '..', 'models')
dlibModelDir = os.path.join(modelDir, 'dlib')
openfaceModelDir = os.path.join(modelDir, 'openface')


#Carregamento dos modelos utilizados no processamento
dlibFacePredictor = os.path.join(dlibModelDir, "shape_predictor_68_face_landmarks.dat")
networkModel = os.path.join(openfaceModelDir, 'nn4.small2.v1.t7')
imgDim = 96

app = Flask(__name__)

UPLOAD_FOLDER = 'uploads'
#ALLOWED_EXTENSIONS = set(['txt', 'pdf', 'png', 'jpg', 'jpeg', 'gif'])


app.config['UPLOAD_FOLDER'] = UPLOAD_FOLDER


#----------------------------------------------------------------------------
@app.route('/process_file', methods = ['POST','GET'])
def api_process_file():

    startProcess = time.time()
    start = time.time()
    

    dic = {}

    try:
        print('**** Processamento de arquivo. {%s} ****' % time.strftime("%c"))

	#Se existe arquivo no corpo da requisicao
        if request.files:

	    #Obtem o arquivo do corpo da requisicao
            fileobj = request.files["file"]

            print '    + Processando arquivo encontrado no corpo da requisicao'

            if fileobj:

		#Armazenando o arquivo no local especificado
                filename = "arquivo.jpg" #secure_filename(file.filename)
		fullFileName = os.path.join(app.config['UPLOAD_FOLDER'], filename)

		if os.path.isfile(fullFileName):
			os.remove(fullFileName)
			print("        + Arquivo: {} antigo removido".format(fullFileName))

		fileobj.save(fullFileName)

		print("        + Arquivo: {} armazenado com sucesso".format(fullFileName))
		print("        + Tempo de Execucao: {} segundos.".format(time.time() - start))
		
		start = time.time()

		#Carregamento da imagem deteccao de face
		align = openface.AlignDlib(dlibFacePredictor)
		net = openface.TorchNeuralNet(networkModel, imgDim)
		brgImg = cv2.imread(fullFileName)
		if brgImg is None:
			raise Exception("Unable to load image: {}".format(fullFileName))

		print("        + Deteccao de faces. Total: {}".format(time.time() - start))

		start = time.time()

		rgbImg = cv2.cvtColor(brgImg, cv2.COLOR_BGR2RGB)		
		print("        + Original size: {}".format(rgbImg.shape))
		
		#Buscando a maior face detectada na imagem
		bb = align.getLargestFaceBoundingBox(rgbImg)
		if bb is None:
			raise Exception("Unable to find a face: {}".format(fullFileName))

		print("        + Face encontrada. Total: {}".format(time.time() - start))
		
		start = time.time()

		#Realizando o alinhamento da face
		alignedFace = align.align(imgDim, rgbImg, bb, landmarkIndices=openface.AlignDlib.OUTER_EYES_AND_NOSE)

		if alignedFace is None:
			raise Exception("Unable to align image: {}".format(fullFileName))

		print("        + Face alinhada. Total: {}.".format(time.time() - start))

		start = time.time()

		#Obtendo dados da assinatura
		rep = net.forward(alignedFace)

		print("        + Assinatura concluida. Total: {}.".format(time.time() - start))

		start = time.time()

		#Convertendo a assinatura para formato json
		#dic = {}
		dic['signature'] = list(rep) 
		dic['Code'] = 'OK'
		dic['ErrorMessage'] = ''
		#print(type(dic))
		#print(dic)

		jsonTestResult = json.dumps(dic)
		respResult = Response(jsonTestResult, status=200, mimetype='application/json')

		print("        + Conversao para json concluida. Total: {}.".format(time.time() - start))

		print("    **** Processamento Concluido. Total: {} ****.".format(time.time() - startProcess))

		return respResult

    except Exception as e:
        print e
	dic['signature'] = ''
	dic['Code'] = 'Error'
	dic['ErrorMessage'] = str(e)
	jsonTestResult = json.dumps(dic)
	respResult = Response(jsonTestResult, status=200, mimetype='application/json')
	print("    **** Processamento Concluido com erro. Total: {} ****.".format(time.time() - startProcess))

	return respResult

    
    dic['signature'] = ''
    dic['Code'] = 'NoFile'
    dic['ErrorMessage'] = 'Nenhum arquivo encontrado na requisicao'

    jsonTestResult = json.dumps(dic)
    respResult = Response(jsonTestResult, status=200, mimetype='application/json')
    print("    **** Processamento Concluido sem arquivo. Total: {} ****.".format(time.time() - startProcess))

    #array = '{"signature": [1.1231, 2.233, 3.2323, 4.532, 5.21312, 6.4545, 7.123123]}'
    #data = json.loads(array)
    #signature = data['signature']
    #print signature
    #js = json.dumps(signature)
    #resp = Response(js, status=200, mimetype='application/json')

    return respResult


if __name__ == '__main__':
    app.run(debug=True,host='0.0.0.0',port=8000)

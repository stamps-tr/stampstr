# -*- coding: utf-8 -*-
from kafka import KafkaConsumer
import base64
import webbrowser, os
import json
import sys
reload(sys)

sys.setdefaultencoding("utf-8")




__author__ = 'Samara Cardoso (samaracardosodossantos@gmail.com)'


kafka_json = []

consumer = KafkaConsumer(bootstrap_servers=' stampsnet.hashtagsource.com:9092',
                         auto_offset_reset='earliest',
                         enable_auto_commit=False,
                         consumer_timeout_ms=1000)

consumer.subscribe(['erlunID'])


while True:
	for message in consumer:
		kafka_json.append(message.value.decode('base64'))


		infos = json.loads(kafka_json[0])


		content = "<html lang='en'>\
		  <head>\
		    <meta charset='utf-8'>\
		    <meta name='viewport' content='width=device-width, initial-scale=1, shrink-to-fit=no'>\
		    <link href='http://getbootstrap.com/dist/css/bootstrap.min.css' rel='stylesheet'>\
		    <link href='http://getbootstrap.com/docs/4.0/examples/narrow-jumbotron/narrow-jumbotron.css' rel='stylesheet'>\
		    <title>Time 04 - Fornecedores</title>\
		  </head>\
		  <body>\
		    <div class='container'>\
		      <header class='header clearfix'>\
			<h3 class='text-muted'>Ficha do Paciente</h3>\
			  </header>\
		      <main role='main'>\
			<div class='jumbotron' style='padding: 5px; text-align: left;'>\
			    <div class='row'>\
			    <div class='col-md-6'>\
				<img src="+str(infos[u'Photo'].decode('utf-8'))+">\
			    </div>\
			    <div class='col-md-6'>\
			     <p><b>Nome:</b>  "+str(infos[u'Nome'].decode('utf-8'))+"</p>\
			     <p><b>Tratamento Médico Atual:</b>  "+str(infos[u'Tratamento Medico Atual'].decode('utf-8'))+"</p>\
			     <p><b>Alteracoes Cardiacas:</b>  "+str(infos[u'Alteracoes Cardiacas'].decode('utf-8'))+"</p>\
			     <p><b>Disturbio Circulatorio:</b>  "+str(infos[u'Disturbio Circulatorio'].decode('utf-8'))+"</p>\
			     <p><b>Sexo:</b>  "+str(infos[u'Sexo'].decode('utf-8'))+"</p>\
			     <p><b>Portador de Marcapasso:</b>  "+str(infos[u'Portador de Marcapasso'].decode('utf-8'))+"</p>\
			     <p><b>Hipertensao Arterial:</b>  "+str(infos[u'Hipertensao Arterial'].decode('utf-8'))+"</p>\
			     <p><b>Disturbio Renal:</b>  "+str(infos[u'Disturbio Renal'].decode('utf-8'))+"</p>\
			     <p><b>Disturbio Hormonal:</b>  "+str(infos[u'Disturbio Hormonal'].decode('utf-8'))+"</p>\
			     <p><b>Disturbio Gastro-Intestinal:</b>  "+str(infos[u'Disturbio Gastro-Intestinal'].decode('utf-8'))+"</p>\
			     <p><b>Epilepsia:</b>  "+str(infos[u'Epilepsia'].decode('utf-8'))+"</p>\
			     <p><b>Alteracoes Psiquiatricas:</b>  "+str(infos[u'Alteracoes Psiquiatricas'].decode('utf-8'))+"</p>\
			     <p><b>Estresse:</b>  "+str(infos[u'Estresse'].decode('utf-8'))+"</p>\
			     <p><b>Diabetes:</b>  "+str(infos[u'Diabetes'].decode('utf-8'))+"</p>\
			     <p><b>Antecedentes Oncológicos:</b>  "+str(infos[u'Antecedentes Oncologicos'].decode('utf-8'))+"</p>\
			    </div>\
			    </div>\
			</div>\
		      </main>\
		      <footer class='footer'>\
			<p>&copy; STAMPS-TR 2017</p>\
		      </footer>\
		    </div>\
		  </body>\
		</html>"


		filename = 'dashboard.html'
		f = open(filename,'w')
		f.write(content)
		f.close()

		webbrowser.open('file://' + os.path.realpath(filename))

import nltk
import pickle
from pacientes.NLTK.classifier import Filtering

list=[]
print("TESTANDO")

print("Loading filter")
f = open('my_filter.pickle', 'rb')
filter = pickle.load(f)
f.close()
print("Preparing set to test")
testSet=filter.preparingSetToTest(list)
print("Loading classifier")
f = open('my_classifier.pickle', 'rb')
classifier = pickle.load(f)
f.close()
print("Fazendo teste...")
accuracy = nltk.classify.accuracy(classifier,testSet)
print("Percentual de acertos:",accuracy)

# list=[]
# collection = db['woTest'].find()
# print("TESTE")
# print(collection)
# for post in collection:
#     pprint.pprint(post)
#     list.append(post)
# categoryset = set([x['system'] for x in list])
# for sistema in categoryset:
#     print("S - " +sistema)
#
# testSet=filter.filterByCategory(list, categoryset, 0)
# trainSet=filter.preparingSetToTrain(trainSet)
# classifier = nltk.NaiveBayesClassifier.train(trainSet)
#
# total=[]
#
# while True:
#     # trainset = random.sample(t, int((9/10) * len(t)))
#     # testset = [x for x in t if trainset.count(x) == 0]
#     trset=[]
#     for tuple in categoryset:
#         # print("Separando sets")
#         # print(tuple[0])
#         auxset = mDB.select_lote("SELECT system,wonumber FROM wo2016 WHERE wonumber = '"+tuple[0]+"'")
#         trset += random.sample(auxset, int((4 / 5) * len(auxset)))
#
#     ttset=[x for x in dbset if trset.count(x) == 0]
#     #print("Alterando formato dos dados")
#     print(ttset)
#     trainset=filter.preparingSetToTrain(trset)
#     testset=filter.preparingSetToTrain(ttset)
#     #print("Iniciando treinamento")
#     classifier = nltk.NaiveBayesClassifier.train(trainset)
#
# #    classifier.show_most_informative_features(150)
#     #print("Fazendo o teste")
#     accuracy = nltk.classify.accuracy(classifier,testset)
#
#     total.append(accuracy)
#
#     print(str(numpy.mean(total))+" - "+str(accuracy))
#
#     if accuracy>0.8:
#         # print(dbset)
#         # print(len(dbset))
#
#         with open("treinoFinal.txt", "wb") as fp:  # Pickling
#             pickle.dump(trset, fp)
#         with open("testeFinal.txt", "wb") as fp:  # Pickling
#             pickle.dump(ttset, fp)
#
#         watsonClassifier = WatsonClassifier()
#         # O Watson recebe como entrada um bloco de treinamento no formato de um arquivo csv.
#         # Esse treinamento deve ser feito com o melhor set possível. Não é preciso fazer o treinamento
#         # toda vez que o código for executado.
#         #
#         with open('setBD2016.csv', 'w', newline='') as csvfile:
#             spamwriter = csv.writer(csvfile, delimiter=',', quoting=csv.QUOTE_MINIMAL)
#             for train_case in trset:
#                 spamwriter.writerow(
#                     [train_case[0].replace(",", " ").replace(";", " ").replace(".", " "), train_case[1]])
#
#         break
#
#         # with open('setBD.csv', 'rb') as training_data:
#         #     watsonClassifier.create_classifier("delfosClassifier", training_data)
#         # print("acabou!")
#
# # certo=0
# # for x in test:
# #     if(x[1]==classifier.classify(x[0])):
# #         certo+=1
# #         #print(x[0]+"---"+x[1]+"/"+classifier.classify(x[0]))
# #
# # print("treino com "+str(len(train)))
# # print("teste com "+str(len(test)))
# # print(str(certo)+" certos de "+str(len(test))+" classificações")
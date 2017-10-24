import nltk
import pickle
from pacientes.NLTK.classifier import Filtering
import csv
import pprint

dic = {}
with open('dataset_clean1.csv', newline='') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=',')
    for row in spamreader:
        if row[0] in dic:
            dic[row[0]] += ", "+row[1]
        else:
            dic[row[0]]=row[1]
list =[]
for doenca in dic.keys():
    list.append([doenca,dic[doenca]])
# pprint.pprint(dic)
# pprint.pprint(list)
filter=Filtering()
print("Preparing set to training")
trainSet=filter.preparingSetToTrain(list,10000)
pprint.pprint(trainSet)
classifier = nltk.NaiveBayesClassifier.train(trainSet)

print("Saving classifier")
f = open('my_classifier.pickle', 'wb')
pickle.dump(classifier, f)
f.close()
print("Saving filter")
f = open('my_filter.pickle', 'wb')
pickle.dump(filter, f)
f.close()

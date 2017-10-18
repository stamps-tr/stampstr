import nltk
import pickle
from pacientes.NLTK.classifier import Filtering

filter=Filtering()
print("Preparing set to training")
trainSet=filter.preparingSetToTrain(list,10000)
# print(trainSet)
classifier = nltk.NaiveBayesClassifier.train(trainSet)
print("Saving classifier")
f = open('my_classifier.pickle', 'wb')
pickle.dump(classifier, f)
f.close()
print("Saving filter")
f = open('my_filter.pickle', 'wb')
pickle.dump(filter, f)
f.close()

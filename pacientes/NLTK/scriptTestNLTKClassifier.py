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
text = filter.preparingToClassify('I have chest pain, breath difficulty, pain in my right arm')
print(classifier.classify(text))

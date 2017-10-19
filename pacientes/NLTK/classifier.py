from nltk.tokenize import word_tokenize
from nltk.corpus import stopwords
from nltk.stem import RSLPStemmer
import re

class Filtering:
    # A ser usado pelo menos uma vez (por exemplo no treinamento).
    ## Formata a lista de tuplas (string_to_classify, classification) no formato que o NLTK aceita.
    ## N é o Número de palavras a ser usadas no classificador. Isso serve para que palavras de pouca incidência sejam
    ## desconsideradas no treinamento do classificador.
    def preparingSetToTrain(self, input, N=2000):
        self.all_words = set()
        wordsFreq = {}
        stopWords = stopwords.words('portuguese')
        stemmer = RSLPStemmer()
        for document in input:
            clean_text = re.sub(u'[^a-zA-Z0-9áéíóúÁÉÍÓÚâêîôÂÊÎÔãõÃÕçÇ: ]', '', document['workDone'])
            for word in word_tokenize(clean_text,'portuguese'):
                if word.lower() not in stopWords:
                    stemmed_word = stemmer.stem(word.lower())
                    if stemmed_word in wordsFreq:
                        wordsFreq[stemmed_word]+=1
                    else:
                        wordsFreq[stemmed_word]=1
        i = 0
        for item in sorted(wordsFreq, key=wordsFreq.get):
            if(i<N):
                self.all_words.add(item)
            i+=1
        t = []
        for document in input:
            clean_text = re.sub(u'[^a-zA-Z0-9áéíóúÁÉÍÓÚâêîôÂÊÎÔãõÃÕçÇ: ]', '', document[0])
            aux = {}
            for word in word_tokenize(clean_text, 'portuguese'):
                if word.lower() not in stopWords:
                    stemmed_word = stemmer.stem(word.lower())
                    if stemmed_word in self.all_words:
                        aux[stemmed_word]=True
            for word in self.all_words:
                if word not in aux:
                    aux[word] = False
            t.append((aux,document[1]))
        return t

    # A ser usado depois que o método acima foi usado pelo menos uma vez.
    ## Formata a lista de tuplas (string_to_classify, classification) no formato que o NLTK aceita.
    def preparingSetToTest(self, input):
        stopWords = stopwords.words('portuguese')
        stemmer = RSLPStemmer()
        t = []
        for document in input:
            clean_text = re.sub(u'[^a-zA-Z0-9áéíóúÁÉÍÓÚâêîôÂÊÎÔãõÃÕçÇ: ]', '', document[0])
            aux = {}
            for word in word_tokenize(clean_text, 'portuguese'):
                if word.lower() not in stopWords:
                    stemmed_word = stemmer.stem(word.lower())
                    if stemmed_word in self.all_words:
                        aux[stemmed_word]=True
            for word in self.all_words:
                if word not in aux:
                    aux[word] = False
            t.append((aux,document[1]))
        return t
#esta biblioteca permite gerar um numero aleatório
import random

#gera numero aleatório entre 0 e 1
num = random.random()
print('Numero escolhido aleatóriamente entre 0 e 1 = {0}'.format(num))

#gera int dentro do intervalo passado como paramêtro
num2 = random.randint(1, 10)
print('Numero escolhido aleatóriamente entre 1 e 10 = {0}'.format(num2))

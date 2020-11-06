#Outro tipo de exceção é quando tentamos acessar o elemento de um vetor
#maior que o comprimento dele

#temos posições de 0 a 3
vetor = [2, 5, 3, 1]

#Se tentarmos acessar posição 4 ela não existe
try :
    print(vetor[4])
#Exceção capturada
except :
    print("Indice invalido")

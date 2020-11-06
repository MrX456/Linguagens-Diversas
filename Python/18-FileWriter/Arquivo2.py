#Em um arquivo criado podemos adiconar qualquer texto, inclusive valor de variaveis

a = 3
b = 5

vet = [1, 4, 6, 2]

matriz = [[1,4], [3,7]]

#Criando arquivo txt
arquivo = open("file.txt","w+")

#Escrevendo valores das variaveis
arquivo.write("Inserindo variaveis no documento")
arquivo.write("\na = {0}".format(a))
arquivo.write("\nb = {0}".format(b))

arquivo.write("\nVetor\n")

#Escrevendo vetor
for v in vet :
    arquivo.write(str(v))
    arquivo.write(" ")

arquivo.write("\nMatriz\n")

#Escrevendo matriz
for i in matriz :
    for j in i :
        arquivo.write(str(j))
        arquivo.write(" ")
    arquivo.write(" \n")

#Fechando arquivo
arquivo.close()

#O python não possui variaveis compostas multidimensionais (matrizes)
#No python precisamos de um vetor dentro do outro para ter uma matriz

#Aqui podemos ter uma matriz 3x3
matriz = [[1,3,5],[2,4,6],[3,5,7]]

#Para acessar um elemento em uma posição especifica temos que ter colocar
#a linha e a coluna correnpondente
print("Linha 2 Coluna 1")
print(matriz[2][1]) 

print("==================")

#Mostrara 5 porque o indice de ambos começa em 0

print("Linha 0 Coluna 0")
print(matriz[0][0])

print("==================")

print("Matriz completa")

#Para ver toda a matriz precisamos de um for dentro de outro(um para linha e outra para coluna)
for i in matriz :
    for j in i :
        print(j, end = " ")
    print()



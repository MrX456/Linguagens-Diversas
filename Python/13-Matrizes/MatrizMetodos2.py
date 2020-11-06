#Temos mais alguns metodos de matrizes

matriz = [[2,5,1]]

#Adiconar uma nova linha a matriz
print("Inserir nova linha a matriz")
matriz.insert(1, [4,6,2])

for i in matriz :
    for j in i :
        print(j, end = " ")
    print()

#Modificar os elementos de uma linha inteira
print("Modificar segunda linha")
matriz[1] = [8,3,2]

for i in matriz :
    for j in i :
        print(j, end = " ")
    print()

#Deletar uma linha inteira
print("Deletar primeira linha")
del matriz[0]

for i in matriz :
    for j in i :
        print(j, end = " ")
    print()
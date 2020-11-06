#Assim como os vetores as matrizes possuem alguns metodos

matriz = [[1, 2],[3, 4]]

for i in matriz :
    for j in i :
        print(j, end = " ")
    print()

#Adicionar um elemento em uma matriz
print("Adicionar elemento na primeira linha")
matriz[0].append(5)

for i in matriz :
    for j in i :
        print(j, end = " ")
    print()

#Adicionar um elemento em uma matriz
print("Adicionar elemento na segunda linha")
matriz[1].append(8)

for i in matriz :
    for j in i :
        print(j, end = " ")
    print()

#Podemos atualizar um elemento especifico de uma matriz
print("Modificar elemento da posição 0x0")
matriz[0][0] = 9

for i in matriz :
    for j in i :
        print(j, end = " ")
    print()

#Podemos excluir um elemento especifico de uma matriz
print("Excluindo elemento 0x1")
del matriz[0][1]

for i in matriz :
    for j in i :
        print(j, end = " ")
    print()

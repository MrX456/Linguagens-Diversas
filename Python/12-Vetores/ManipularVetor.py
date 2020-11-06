#Podemos fazer algumas manipilações no vetores

numeros = [1, 3 ,4, 6, 7]

for n in numeros :
    print(n)

print("============")

#Os vetores começam no indice, aqui podemos ver o elemento correspondente a
#posição 3(Começa no inidice 0)
print("Elemento posição 3")
print(numeros[3])

print("============")

#Podemos mostrar o tamanho do vetor(qtde de elementos) com len()
print("Tamanho de numeros")
print(len(numeros))

print("============")

#Podemos modificar um elemento de um vetor pelo seu indice
print("Modificando primeiro elemento")
numeros[0] = 'r'

for n in numeros :
    print(n)

print("============")

#Podemos adicionar um elemento em um vetor com append()
print("Adicionar elemento")
numeros.append("sr")

for n in numeros :
    print(n)

print("============")

#Podemos adicionar um elemento em um vetor com pop()
print("Remover elemento posição 2")
numeros.pop(2)

for n in numeros :
    print(n)




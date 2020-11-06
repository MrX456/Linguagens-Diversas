#Temos outros métodos para trabalhar com vetores

numeros = [2, 1, 6, 4]

print("Vetor")

for n in numeros :
    print(n)

print("========")

#Podemos copiar todos elementos do vetor com copy()
print("Vetor Copia")
copia = numeros.copy()

for c in copia :
    print(c)

print("========")

#Remover todos elemento da lista
print("Remover Elementos Copia")
copia.clear()

for c in copia :
    print(c)

print("========")

#Retornar indice de elemento especificado
print("Posição de 6")
print(numeros.index(6))

print("========")

#Retornar quantos elementos temos com o valor especificado
print("Ocorrencia do número 7")
print(numeros.count(7))

print("========")

#Adicionar elemento em posição especificada
print("Adicionar elemento na posição 1")
numeros.insert(1, 'k')

for n in numeros :
    print(n)

print("========")

#Remover elemento especificado
print("Remover elemento k")
numeros.remove('k')

for n in numeros :
    print(n)

print("========")

#Inverter a ordem dos elementos do vetor
print("Inverter")
numeros.reverse()

for n in numeros :
    print(n)

print("========")

#Ordenar elementos do vetor
print("Ordenar")
numeros.sort()

for n in numeros :
    print(n)

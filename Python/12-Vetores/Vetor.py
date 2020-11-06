#Vetores são variaveis que podem possuir diversos valores armazenados nelas

#Para iniciar um vetor em python fazemos

numeros = [2, 3, 6, 9] #inteiros

frutas = ['banana', 'maçã', 'abacaxi'] #strings

#para mostrar os elementos de um vetor precisamos do laço for
print("Números")
for numero in numeros :
    print(numero)

print("-------------")

print("Frutas")
for fruta in frutas :
    print(fruta)

print("-------------")

#Como python não e tipado podemos misturar tipos em um vetor
vet = [2, 's', 5, True, "Ana"]

for v in vet :
    print(v)

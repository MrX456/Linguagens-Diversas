#Podemos ordenar um vetor através de alguns métodos criados por programadores
#Este método é chamado BubbleSort

def bubble_sort(vetor) :
    tamanho = len(vetor) - 1
    ordenado = False
    while not ordenado :
        ordenado = True
        for i in range(tamanho) :
            if vetor[i] > vetor[i + 1] :
                vetor[i], vetor[i + 1] = vetor[i + 1], vetor[i]
                ordenado = False
                print(vetor)
    return vetor

#Criando vetor
vet = [9,5,7,3,1]
print("Vetor original")

for v in vet :
    print(v, end = " ")

print("\n===========")

#Ordenando com bubble sort
print("Bubble Sort")
bubble_sort(vet)

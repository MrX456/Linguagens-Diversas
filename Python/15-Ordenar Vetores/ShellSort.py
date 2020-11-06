#Podemos ordenar um vetor através de alguns métodos criados por programadores
#Este método é chamado ShellSort

def shell_sort(vetor) :
    tam = len(vetor) // 2
    while tam > 0 :
        for i in range(tam) :
            gap_insertion_sort(vetor, i, tam)
        tam = tam // 2
    return vetor

#metodo auxiliar
def gap_insertion_sort(vetor, inicio, gap) :
    for i in range(inicio + gap, len(vetor), gap) :
        valor_atual = vetor[i]
        posicao = i
        while posicao >= gap and vetor[posicao - gap] > valor_atual :
            vetor[posicao] = vetor[posicao - gap]
            posicao -= gap
        vetor[posicao] = valor_atual
    
#Criando vetor
vet = [9,5,7,3,1]
print("Vetor original")

for v in vet :
    print(v, end = " ")

print("\n===========")

#Ordenando com shell sort
print("Shell Sort")
print(shell_sort(vet))

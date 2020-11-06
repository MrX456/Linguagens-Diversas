#Usuario cria um vetor com 4 elementos

print("Criar vetor com 4 elementos.")

vetor = [] #vetor vazio

for i in range(4) :
    x = input("Digite algo para adicionar ao vetor : ")

    vetor.append(x)

print("================================")

print("Vetor criado")
for v in vetor :
    print(v)
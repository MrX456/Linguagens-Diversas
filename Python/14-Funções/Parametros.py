#Parametros são valores que serão passados as funções para serem manipulados

#Esta função precisa de um parametro nome e retorna uma mensagem de ola 
def ola(nome) :
    return ('Olá {0}'.format(nome))

#Podemos ter diversos parametros em uma função
def soma(x, y) :
    return x + y

#Ordenar um vetor
def ordenarVetor(vetor) :
    return vetor.sort()

#Ao chamar as funções criados devemos passar os parametros
print(ola("Pedro"))

print("========")

print(soma(3, 6))

print("========")

vet = [3,9,7,8,1]
ordenarVetor(vet)

for i in vet :
    print(i)



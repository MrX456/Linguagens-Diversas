#Funções são blocos de código que são executados ao serem chamados em qualquer lugar no código
#Isto evita a repetição de um mesmo bloco de codigo em um programa

#Para iniciar uma função usar a palavra def
def mensagem() :
    #Este bloco será executado todas vez que a função for chamada
    print("Ola Mundo!")

#Aqui temos outra função
def soma() :
    print(2 + 2)
    print(3 + 3)

#Agora chamando as funções os blocos seus serão executados
mensagem()

soma()

mensagem()

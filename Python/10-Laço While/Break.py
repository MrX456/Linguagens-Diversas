#Podemos encerrar um laço while imediatamente usando o comando break

a = 1

x = int(input('Digite um número ente 1 e 5 '))

# A condição seria executada ate a valer 10 mas o break interrompe
#o laço assim que é acionado(Quando a vale o numero que o usuario digitou(1 a 5)

while a < 11 :
    print(a)
    a += 1

    # Se a valer x laço será encerrado imediatamente e o numero digitado pelo
    #usuario nao sera mostrado
    if a == x :
        break

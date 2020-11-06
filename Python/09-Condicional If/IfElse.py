#Tambem podemos usar o else que é executado caso a condição testada no if seja falsa

nome = input('Digite seu nome : ').title()
print('Seja bem vindo {0}'.format(nome))

porta = int(input('1 , 2 ou 3: Escolha uma porta : '))

#bloco executado se usuario digitar 1
if porta == 1 :
    print('Parabéns você ganhou um carro')
#bloco executado se usuario digitar qualquer outra coisa
else :
    print('Você perdeu o jogo')

#Independente de qual bloco foi executado este comando será executado
print('Fim de jogo')

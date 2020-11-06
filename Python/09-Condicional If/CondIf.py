#O condicional if testa uma condição e se e somente se ela for verdadeira o bloco é executado

nome = input('Digite seu nome : ').title()
print('Seja bem vindo {0}'.format(nome))

porta = int(input('1 , 2 ou 3: Escolha uma porta : '))

#Este bloco só será executado se o usuario digitar 1
if porta == 1 :
    print('Parabéns, você ganhou um carro!')

#Este comando será executado independente do que o usuario digitar(mesmo que bloco do if seja executado)
print('Jogo encerrado')

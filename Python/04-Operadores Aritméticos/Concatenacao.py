#Podemos concatenar(juntar) mensagens usando operador +
#este operador só se aplica para concatenar tipos iguais

nome = 'Adriana'
idade = 27

#temos somente tipo string
print('Olá ' + nome +' prazer em te conhecer!')

#Para tipos diferentes concatenamos com ,
print(nome ," tem " ,idade ," anos ")

#podemos usar operador * com str
print(nome * 5)
#vai imprimir o valor da str nome 5 vezes

#temos o método da substituição
print('{0} tem {1} anos'.format(nome,idade))

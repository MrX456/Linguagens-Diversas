#a ordem de precedência dos operadores aritméticos é
#() parenteses
#** potenciação
#* / // % multiplicação e divisão divisão inteira resto
#+ - soma e subtração
#se houver mesma precedência é resolvido da esquerda para direita

x = 5
y = 7
#parenteses tem maior precedencia
media = (x + y) / 2

#mesma precedencia é resolvido da esquerda para a direita
z = x + y - x

#raizes podem ser calculadas desta forma
raizquad = 25 ** (1/2)
raizcub = 8 ** (1/3)

print(media)
print(z)
print('raiz quadrada de 25')
print(raizquad)
print('raiz cúbica de 8')
print(raizcub)


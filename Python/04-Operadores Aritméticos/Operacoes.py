#operações diversas

x = int(input('Digite um numero: '))
y = int(input('Digite outro numero: '))
s = x + y
m = x * y
d = x / y
di = x // y
e = x ** y

#vamos exibir com substituição
#para valores decimais vamos exibir apenas 3 casas(:.3f)
print('A soma é {0}, o produto é {1} e a divisão é {2:.3f}'.format(s, m, d), end=' ')
print('Divisão inteira {0} e potenciação {1}'.format(di, e))

#comando end='' junta as duas linhas em uma só
        

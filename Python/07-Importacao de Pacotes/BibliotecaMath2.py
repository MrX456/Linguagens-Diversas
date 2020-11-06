#Aqui vamos importar funções especificas de math
from math import pow, factorial, ceil

num = int(input('Digite um numero : '))

#quadrado o numero
pot = pow(num, 2)
#fatorial do numero
fac = factorial(num)

print('O quadrado de {0} é {1}'.format(num, ceil(pot)))
print('O fatorial de {0} é {1}'.format(num, fac))

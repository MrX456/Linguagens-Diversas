#assim como outras linguagem podemos importar bibliotecas no Python
#isto é feito através do comando import
#vamos importar biblioteca math e todos suas funcionalidades.
import math

num = int(input('Digite um numero : '))

#calcula raiz quadrada
raiz = math.sqrt(num)
print('A raiz quadrada de {0} é {1}'.format(num, raiz))

#podemos arredondar para cima com ceil
print('o valor de {0} arredondado para cima é {1}'.format(raiz, math.ceil(raiz)))

#podemos arredondar para baixo com floor
print('o valor de {0} arredondado para baixo é {1}'.format(raiz, math.floor(raiz)))

#podemos truncar um numero com trunc
print('o valor de {0} truncado é {1}'.format(raiz, math.trunc(raiz)))

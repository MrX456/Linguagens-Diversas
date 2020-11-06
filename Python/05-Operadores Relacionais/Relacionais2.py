#Tambem podemos comparar caracteres usando os operadores relacionais

a = 'c'
c = 'c'
d = 6
e = '6'
nome1 = 'Cecilia'
nome2 = 'Maria'

print("{0} == [igual a] {1} ? {2}".format(a, c, a == c)) # Verdadeiro
print("{0} == [igual a] {1}[str] ? {2}".format(d, e, d == e)) # Falso pois um é string
print("{0} == [igual a] {1} ? {2}".format(nome1, nome2, nome1 == nome2)) # Falso

# Operadores reacionais testam a relação entre duas variaveis

x = 4
y = 2
z = 7
w = 2

#Os operadores relacionais em Python são :
# Maior >, Menor <
# Maior ou igual >=, Menor ou igual <=
# Igual ==

print("{0} > [maior que] {1} ? {2}".format(x, y, x > y)) # Verdadeiro
print("{0} < [menor que] {1} ? {2}".format(z, y, x < y)) # Falso
print("{0} >= [maior ou igual que] {1} ? {2}".format(x, z, x >= z)) # Falso
print("{0} <= [menor ou igual que] {1} ? {2}".format(y, w, y <= w)) # Verdadeiro
print("{0} == [igual a] {1} ? {2}".format(y, z, y == z)) # Falso



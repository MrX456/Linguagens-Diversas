# Operadores lógicos permitem testar multiplas relações entre variaveis

x = 4
y = 6
z = 9

print("x={0} y={1} z={2}".format(x, y, z))

# Os operadores lógicos em python são

# E = and
print("{0}<{1} e {2}<{3} = {4}".format(x, y, y, z, (x < y) and (y < z))) #v e v = v
print("{0}>{1} e {2}<{3} = {4}".format(x, y, y, z, (x > y) and (y < z))) #f e v = f
print("{0}<={1} e {2}>={3} = {4}".format(x, y, y, z, (x <= y) and (y >= z))) #v e f = f
print("{0}=={1} e {2}>={3} = {4}".format(x, y, y, z, (x == y) and (y >= z))) #f e f = f

print('===========================')

# OU = or
print("{0}<{1} ou {2}<{3} = {4}".format(x, y, y, z, (x < y) or (y < z))) #v ou v = v
print("{0}>{1} ou {2}<{3} = {4}".format(x, y, y, z, (x > y) or (y < z))) #f ou v = v
print("{0}<={1} ou {2}>={3} = {4}".format(x, y, y, z, (x <= y) or (y >= z))) #v ou f = v
print("{0}=={1} ou {2}>={3} = {4}".format(x, y, y, z, (x == y) or (y >= z))) #f e f = f

print('===========================')

# NÃO = not -> Inverte o resultado do teste lógico
print("não {0}<{1} = {2}".format(x, y, not (x < y))) # não v = f
print("não {0}>{1} = {2}".format(y, z, not (y > z))) # não f = v


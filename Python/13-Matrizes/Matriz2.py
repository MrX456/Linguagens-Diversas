#Matrizes poder ser de diversos tipos, inclusive misturados

carros = [['Supra', 'Corvette'],['Charger', 'Gallardo']]

#Mostrar matriz
for i in carros :
    for j in i :
        print(j, end = "-")
    print()

#Tipos misturados
grid = [[1, 'Gallardo'],[2, 'Supra'],[3, 'Corvette'],[4, 'Charger']]

print("Grid")

#Mostrar matriz
for i in grid :
    for j in i :
        print(j, end = " ")
    print()

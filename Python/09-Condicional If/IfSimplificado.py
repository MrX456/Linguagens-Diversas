#Tambem podemos usar um if mais simplificado que lembra os operadores
#ternários de outras linguagens

nota1 = float(input('Digite a primeira nota: '))
nota2 = float(input('Digite a segunda nota: '))
media = (nota1 + nota2) / 2

print('Média = {:.1f}'.format(media))

#Aqui temos um if simplificado
print('Aprovado' if media >= 5 else 'Reprovado')

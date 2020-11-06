#Podemos fatiar strings em python(pegar pedaço especificado da string)

frase = 'Hey Jude, dont make it bad'

print(frase)

#para fatiar uma string passamos o numero do primeiro caracter que queremos
#e o ultimo(espaços tambem são caracteres)
print(frase[6:11])
#obs: caracter de indice 11 não será retornado

#aqui o fatiamento exibe apenas de 2 em 2 no intervalo(ultimo parametro é tamanho do passo)
print(frase[2:15:2]);

#se não especificamos em qual indice iniciar, fatiamento é iniciado a partir do primeiro caracter
print(frase[:6])

# o mesmo se aplica ao ultimo se não for passado
print(frase[10:])

#aqui vai ate o ultimo caracter de 3 em 3
print(frase[5::3])


#Podemos manipular strings através de funções
frase = 'Impossible is nothing'

print(frase)

#Mostra o tamanho da string(espaços tambem são considerados e começa indice 0)
print('tamanho: {0}'.format(len(frase)))

#Mostra a ocorrência de um caracter na string
print('ocorrência de s: {0}'.format(frase.count('s')))

#Mostra a ocorrência de um caracter na string em um intervalo especificado
print('ocorrência de s de 0 a 8: {0}'.format(frase.count('s',0,8)))

#Mostra onde se encontra sequencia de caracteres especificada dentro da string
print('possui is ?: {0}'.format(frase.find('is')))

#Mostra -1 se não encontrar
print('possui are ?: {0}'.format(frase.find('are')))

#Substitui uma sequencia de caracteres da string
print('substituindo caracteres: {0}'.format(frase.replace('is', '_')))




#Tranformação de uma string

frase = 'impossible is nothing'

#Transforma toda string em caixa alta
print('Caixa alta: {0}'.format(frase.upper()))

#Transforma toda string em caixa baixa
print('Caixa baixa: {0}'.format(frase.lower()))

#Capitaliza string
print('Capitalizar: {0}'.format(frase.capitalize()))

#Todas letras iniciais de cada palavra maiusculas
print('Titulo : {0}'.format(frase.title()))

frase2 = '  espaços    '
print(frase2)
#Remove todos espaços do inicio e do fim da string
print(format(frase2.strip()))

#Remove espaços da direita ou da esquerda
print('Direita: {0}-> / Esquerda:<-{1}'.format(frase2.rstrip(), frase2.lstrip()))

#Divide frase formando uma lista
dividir = frase.split()
print('1-{0}/2-{1}/3-{2}'.format(dividir[0],dividir[1],dividir[2]))

#Junta toda string novamente usando espaço para separar palavras
print(' '.join(dividir))

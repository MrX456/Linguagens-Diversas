#usando métodos para ver informações de uma variavel vinda através do input

#estes métodos pertencem a objetos str

x = input('Digite algo ')

#mostra tipo(sempre str)
print('Tipo ', type(x))

#tem somente espaços ?
print('Tem somente espaços? ', x.isspace())

#é um numero?
print('È numérico? ', x.isnumeric())

#é letra?
print('É alfabético', x.isalpha())

#é alfanumérico
print('É alfanumérico? ', x.isalnum())

#está em maiusculo
print('Esta em maiusculos? ', x.isupper())

#está em minuscula
print('Esta em minusculas? ', x.islower())

#está capitalizada(letra inicial maiuscula)
print('Esta capitalizada? ', x.istitle())

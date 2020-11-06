#Podemos fazer diversas formataçoes em uma data
from datetime import datetime

#data e hora completa
data = datetime.now()

#Formatar para dia/mes/ano xx/xx/xxxx
print(data.strftime('%d/%m/%Y'))

#dia/mes/ano xx/xxx/xxxx
print(data.strftime('%d/%b/%Y'))

#dia da semana 3 caracteres(ingles)
print(data.strftime('%a'))

#dia da semana por extenso(ingles)
print(data.strftime('%A'))

#Mes por extenso(ingles)
print(data.strftime('%B'))

#Hora em AM PM
print(data.strftime('%p'))

#Ano ##
print(data.strftime('%y'))



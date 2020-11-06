#Para usar datas no python temos que importar a biblioteca necessaria
import datetime
from datetime import date

#Data atual
hj = date.today()

#Data completa
print(hj)

print("---------")

#Mostrar dia
print(hj.day)
print("---------")
#Mostrar mes
print(hj.month)
print("---------")
#Mostrar ano
print(hj.year)
print("---------")

#Data daqui a x dias
futuro = date.fromordinal(hj.toordinal() + 10) # hoje + 10 dias
print(futuro)

print("---------")

#Diferença entre datas
dif = futuro - hj
print(dif.days) # 10 dias

print("---------")

#Mostrar o dia da semana em numero(0-segunda/6-sabado)
print("Today is {0}". format(hj.weekday()))

print("---------")

#Podemos criar uma data qualquer
#Data ano-mes-dia/hora:minuto:segundo
data = datetime.datetime(1991, 2, 1)
print(data)


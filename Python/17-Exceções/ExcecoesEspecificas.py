#Podemos capturar exceções especificas indicando o nome do erro após o except

#Vamos capturar uma exceção neste try
try :
    print(1/0)
#Este bloco não será executado pois não teremos este erro
except NameError :
    print("Variavel não definida")
#Este bloco será executado pois este erro irá acontecer
except ZeroDivisionError :
    print("Impossivel dividir por 0")
#Este bloco será executado de qualquer maneira
finally :
    print("Finalizando...")

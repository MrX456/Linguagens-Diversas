#Outro tipo de exceção é quando tentamos converter um caracter
#para um valor numerico

try :
    x = int(input("Digite um número : "))
    print("Você digitou o número {0}".format(x))
except :
    print("Você não digitou um número!")
#O bloco finally é executado independentemente se executou o try ou o except
finally :
    print("Finalizando...")
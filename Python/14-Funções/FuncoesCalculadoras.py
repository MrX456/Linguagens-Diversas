#Calculadora

def somar(x, y) :
    return x + y

def subtrair(x, y) :
    return x - y

def multiplicar(x, y) :
    return x * y

def dividir(x, y) :
    return x / y

opcao = "s"

while opcao == 's' :
    print("-------------------------")
    print("Calculadora")
    print("-------------------------")

    x = int(input("Digite o primeiro número : "))
    y = int(input("Digite o segundo número : "))

    print("-------------------------")
    print("Menu")
    print("Digite 1 para soma")
    print("Digite 2 para subtração")
    print("Digite 3 para multiplicação")
    print("Digite 4 para divisão")

    escolha = int(input())

    print("-------------------------")

    #Verificar o valor digitado
    if escolha == 1 :
        print(somar(x, y))
    elif escolha == 2 :
        print(subtrair(x, y))
    elif escolha == 3 :
        print(multiplicar(x, y))
    elif escolha == 4 :
        print(dividir(x, y))
    #Se o usuario digitar qualquer outro valor
    else :
        print("Valor inválido")

    print("-------------------------")

    print("Deseja fazer outra operação?")
    print("Digite s para SIM")
    print("Digite qualquer outro valor para NÃO")
    opcao = input()

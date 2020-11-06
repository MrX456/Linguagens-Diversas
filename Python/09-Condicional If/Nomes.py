
nome = input("Digite seu nome : ")

if nome == 'José' :
    print("Seu nome é comum")

# Podemos passar multiplos nomes dentro desta condição usando in
elif nome in 'Natália Jéssica Ana Claudia' :
    print("Belo nome feminino")

print("Tenha um bom dia {0}".format(nome))

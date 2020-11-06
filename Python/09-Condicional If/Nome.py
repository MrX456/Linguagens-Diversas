
nome = input("Digite seu nome : ")

# Vamos retornar uma mensagem mediante o tamanho do nome do usuário
if len(nome) <= 4 :
    print("Seu nome é pequeno")
    
elif len(nome) > 4 and len(nome) < 9 :
    print("Seu nome tem tamanho médio")
    
else :
    print("Seu nome é grande")

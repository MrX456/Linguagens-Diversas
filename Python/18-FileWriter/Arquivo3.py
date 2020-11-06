#Usuario digita algo e será escrito em um arquivo

msg = input("Digite algo : ")

try :
    print("Criando arquivo...")

    arquivo = open("arq.txt","w+")

    arquivo.write("Texto digitado pelo usuário\n")
    arquivo.write(msg)
    arquivo.close()

    print("Arquivo criado com sucesso!")

except :
    print("Erro ao criar arquivo")

finally :
    print("Finalizando programa...")
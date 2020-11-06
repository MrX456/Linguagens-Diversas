#Assim como em outras linguagens o python pode criar arquivos
#Vamos criar e escrever um arquivo txt com a mensagem "Ola mundo python"

#Este método é usado para abrir um arquivo, se ele não existe o python cria(indicado por w+)
arquivo = open("ola.txt", "w+")

#Se quisermos criar o arquivo em uma pasta especifica temos que indicar o caminho antes 
#do nome do arquivo
#ex arquivo = open("C://ola.txt", "w+")
#Criara o arquivo no disco local C(Windows)


#Para escrever no arquivo criado
arquivo.write("Ola mundo pyton")

#Agora precisamos fechar o arquivo ou ele ficara aberto na memória
arquivo.close()

#Podemos adicionar textos em um arquivo ja criado usando a+
arquivo = open("ola.txt", "a+")

arquivo.write("\nAdicionando texto")

arquivo.close()


#O Python também pode criar um diretório caso ele não exista, precisamos do módulo os
import os

#Agora só colocar o nome da pasta que queremos criar e também já criaremos um
#arquivo dentro dela, mas antes vamos verificar se ela já não existe
if not os.path.exists('minha pasta') :
    os.makedirs('minha pasta')
    
arquivo = open("minha pasta//arquivo.txt", "w+")

arquivo.write("Pasta e arquivo criados pelo python.")

arquivo.close()


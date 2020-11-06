#  Em Python podemos aninhar condições(teremos mais de duas opções de execução)

print("Jogo da adivinhação")
nome = input("Digite seu nome : ")
porta = int(input("1 2 ou 3. Escolha uma porta : "))

# Teremos 3 opções de execução aninhando condicionais

if porta == 1 :
    print("Parabéns {0}, você ganhou um carro".format(nome))
    
# Agora temos outro condicional dentro deste if. Para isto usamos elif
elif porta == 2 :
    print("Parabéns {0}, você ganhou uma casa".format(nome))

# Podemos aninhar quantos elif precisarmos
elif porta == 3 :
    print("{0}, infelizmente você não ganhou nada".format(nome))

# Se enhuma das condições acima forem atendidas esta será executada
else :
    print("Opção inválida")

# Este código é executado independentemente de qual condição for atendida
print("Finalizando jogo...")

# OBS: Esta estrutura é a unica possivel dentro do Pyhton para testar
# mais de duas condições. Não há switch case.

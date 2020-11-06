#Exceções são erros que podem acontecer durante a execução de um programa e causam travamentos.
#Para impedir que isto aconteça devemos tratá-las

def divisao(x , y) :
    return x / y

#Uma divisão por zero gera uma exceção pois nao pode ser feita

#Para tratar uma exceção começamos com try
try :
    #Este bloco tentara ser executado
    print(divisao(1, 0))
    
#Aqui exceção é capturada e podemos exibir uma mensagem amigavel ao usuario.
#Este bloco só é executado se houver a exceção senão é ignorado pelo programa
except :
    print("Não é possivel dividor por 0")

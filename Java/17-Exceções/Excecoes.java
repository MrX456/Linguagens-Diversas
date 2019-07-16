class Excecoes {
    /*Exceções são erros que podem acontecer durante a execução de um programa e causam travamentos.
    Para impedir que isto aconteça devemos tratá-las*/
    public static void main(String[] args) {
        int x = 8;
        int y = 0;
        
        //Não é possivel dividir por 0 isto gera um erro de execução(exceção)
        //Para tratar uma exceção começamos com try
        try {
            System.out.println(x / y);
        }
        
        //Aqui exceção é capturada e podemos exibir uma mensagem amigavel ao usuario.
        //Este bloco só é executado se houver a exceção senão é ignorado pelo programa
	    //Exception e uma classe e ex é apenas uma variavel qualquer desta exceção
        catch(Exception ex) {
            System.out.println("Nao e possivel dividir por 0");
        }
	//Obs: Exception é uma forma genérica de capturar exceção, todas que houverem serão capturadas
	//porém podemos fazer apenas um tratamento
    }   
    
}
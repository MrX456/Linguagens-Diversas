class Metodo {
    // Metodos são blocos de códigos que podem ser chamados através do seu nome.
    // Vamos criar um que escreve ola mundo na tela(sem necessidade de parametros)

    static void ola() { // void não retorna nada(procedimento)
        System.out.println("Ola mundo"); // static método pertence a classe
    }

    // Metodo principal só aceita procedimentos static
    public static void main(String[] args) {
        // Toda vez que metodo for chamado executa seu bloco de comandos
        System.out.println("Chamando metodo");
        ola(); // método deve ser static para ser chamado aqui pois esta classe é static
        System.out.println("Chamando metodo");
        ola();
    }
}
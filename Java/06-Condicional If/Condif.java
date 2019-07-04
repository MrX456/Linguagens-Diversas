class Condif {
    public static void main(String[] args) {
        // Condicional if executa um teste lógico e se for verdadeiro executa o
        // código dento do bloco
        String aluno = "Bruna";
        int nota1 = 10;
        int nota2 = 10;
        int nota3 = 9;
        float media = (nota1 + nota2 + nota3) / 3; // 9

        System.out.println("A media de " + aluno + " foi " + media);

        // Este bloco só será executado de a condição for verdadeira
        if (media > 8) {
            System.out.println(aluno + " esta de parabens!");
        }
        // Neste caso a condição é verdadeira então este bloco vai executar
        // se fosse falsa o programa não executaria este println e iria ao proximo bloco
        // de codigo
    }
}
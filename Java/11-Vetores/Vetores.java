class Vetores {
    public static void main(String args[]) {
        // Em java podemos armazenar varios valores em uma unica estrutura
        // chamada vetor ou array.

        // Declarando um vetor
        int[] num = new int[4]; // Vetor possui 4 elementos(Começa do indice 0)
        // Preenchendo vetor
        num[0] = 1;
        num[1] = 3;
        num[2] = 5;
        num[3] = 7; // Ultima posição

        // Tambem pode-se declarar desta forma
        int[] par = { 2, 4, 6, 8 };

        // Vetores podem ser de qualquer tipo de dado, mas suas posições devem conter
        // somente dados do tipo
        // especificado na sua declaração
        double[] decimais = { 1.2, 3.2, 2.5, 1.8, 1.6 };

        // Classes
        String[] nomes = { "Larissa", "Maria", "Paula", "Daniela", "Giselle" };

        Integer[] val = { 2, 1, 6 };

        // Para mostrar um vetor só podemos exibir uma posição por vez
        System.out.println("Vetor num posicao 0 = " + num[0]);
        System.out.println("Vetor num posicao 1 = " + num[1]);

        // Para exibir todos valores é mais simples usar estruturas de repetição
        // onde i é o indice do vetor, portanto deve começar com 0
        System.out.println("Vetor num");
        for (int i = 0; i < 4; i++) {
            System.out.print(num[i] + " ");
            // 4 posições, indices 0, 1, 2 e 3
        }

        // Para facilitar temos o método nomedovetor.length que executa o laço até o
        // tamanho total do vetor
        // mesmo que mudemos o vetor acrescentando ou tirando uma posição o laço não
        // precisa ser alterado
        System.out.println("");
        System.out.println("Vetor par");
        for (int i = 0; i < par.length; i++) {
            System.out.print(par[i] + " ");
        }

        System.out.println("");
        System.out.println("Vetor decimais");
        for (int i = 0; i < decimais.length; i++) {
            System.out.print(decimais[i] + " ");
        }

        System.out.println("");
        System.out.println("Vetor nomes");
        for (int i = 0; i < nomes.length; i++) {
            System.out.print(nomes[i] + " ");
        }

        System.out.println("");
        System.out.println("Vetor val");
        for (int i = 0; i < val.length; i++) {
            System.out.print(val[i] + " ");
        }
        // Todos este vetores possuem tamanhos distintos mas length itera perfeitamente
        // pelos seus elementos
    }
}
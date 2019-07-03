class Variaveis {
    public static void main(String[] args) {
        /* Tipos de variaveis em java e declaração */

        /* Valores numéricos inteiros */
        int a = 1; /* 32bits */
        byte b = 2; /* 8bits */
        short c = 3; /* 16bits */
        long d = 4; /* 64bits */

        /* Valores numéricos de ponto flutuante */
        float e = 3.21f; /* 32bits OBS: Sem f variavel seria considerada como double */
        double f = 7.2; /* 64bits */

        /* Variaveis booleanas(verdadeiro[true], falso[false]) */
        boolean jogar = true;
        boolean leitura = false;

        /* Variaveis de caracteres */
        char m = 'R';

        /*
         * Em java para armazenar cadeias de caracteres(strings) é utilizado uma classe
         * chamada String
         */
        String cidade = new String("Bruxelas");

        /* Tambem podemos declarar e instanciar de forma mais simples */
        String pais = "Belgica";
        String numero = "5";

        /* Exibindo todas variaveis declaradas */
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
        System.out.println(e);
        System.out.println(f);
        System.out.println(jogar);
        System.out.println(leitura);
        System.out.println(m);
        System.out.println(cidade);
        System.out.println(pais);
        System.out.println(numero);

        /* Podemos formatar a exibição das variaveis de ponto flutuante */
        System.out.printf("%.1f", e); /* Mostra apenas 1 casa depois da virgula */
        System.out.println("");
        System.out.printf("%.2f", e); /* Mostra 2 casas depois da virgula */
        System.out.println("");
        System.out.format("%.2f", e);/* Metodo format faz a mesma função */
    }
}
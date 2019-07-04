class Precedencia {
    public static void main(String[] args) {
        String nome = "Pamela";
        int val1 = 8;
        int val2 = 9;
        int val3 = 9;

        /*
         * A pecedencia dos operadores aritmeticos é Parenteses (opcional) Multiplicação
         * e Divisão Soma e Subtração Operadores de mesma precedencia é feito da
         * esquerda para a direita
         */
        double media = (val1 + val2 + val3) / 3;

        System.out.println("A media final de " + nome + " foi " + media);
    }
}
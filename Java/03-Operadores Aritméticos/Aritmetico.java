class Aritmetico {
    public static void main(String[] args) {
        int x = 4;
        int y = 2;
        // Operadores atritméticos em java
        int soma = x + y; // soma
        int sub = x - y; // subtração
        int multi = x * y; // multiplicação
        double div = x / y; // divisão
        int resto = x % y; // resto de divisão
        int pre_incremento = ++x; // Incrementação feita antes de exibir variavel
        int pos_incremento = y++; // Valor só sera incrementado na segunda chamada da variavel
        int pre_decremento = --x; // Decrementação feita antes de exibir variavel
        int pos_decremento = y--; // Valor só sera decrementado na segunda chamada da variavel

        System.out.println(soma);
        System.out.println(sub);
        System.out.println(multi);
        System.out.println(div);
        System.out.println(resto);
        System.out.println(pre_incremento);
        System.out.println(pre_decremento);
        System.out.println(pos_incremento);
        System.out.println(pos_decremento);
    }
}

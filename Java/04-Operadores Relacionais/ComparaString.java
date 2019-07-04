class ComparaString {
    public static void main(String[] args) {
        // Temos 3 Strings identicas(objetos)
        String nome1 = "Maria";
        String nome2 = "Maria";
        String nome3 = new String("Maria");
        boolean teste;

        // Vamos comparar nomes 1 e 2
        teste = nome1 == nome2;
        System.out.println(teste); // True

        // 1 e 3
        teste = nome1 == nome3;
        System.out.println(teste); // false (embora possua o mesmo texto foram declarados de maneira diferente)

        // Podemos usar um método da classe String para verificar se objetos sao
        // iguais(equals)
        teste = nome1.equals(nome3);
        System.out.println(teste);// true (agora esta sendo comparado o conteudo de cada objeto)

        // Para comparar objetos usamos o método equals. Este método não esta somente
        // restrito a classe
        // String mas esta presente em outras classes do java como Integer, Double entre
        // outras.
    }
}
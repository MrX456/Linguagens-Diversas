class Relacionais {
    public static void main(String[] args) {
        /*
         * Os operadores relacionais em java são: <(menor) >(maior) <=(menou ou igual)
         * >=(maior ou igual) ==(igual) !=(diferente) o teste retorna true(verdadeiro)
         * ou false(falso)
         */

        int a = 1;
        int b = 4;
        int c = 1;
        boolean teste;

        // vamos testar a relação entre as variavies
        teste = a > b;
        System.out.println(a + " > maior que " + b + " ? " + teste);// false

        teste = a < b;
        System.out.println(a + " < menor que " + b + " ? " + teste);// true

        teste = a >= b;
        System.out.println(a + " >= maior ou igual " + b + " ? " + teste);// false

        teste = a <= c;
        System.out.println(a + " <= menor ou igual " + c + " ? " + teste);// true

        teste = a == b;
        System.out.println(a + " == igual a " + b + " ? " + teste);// false

        teste = a != b;
        System.out.println(a + " != diferente de " + b + " ? " + teste);// true
    }
}
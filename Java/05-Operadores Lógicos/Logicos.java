class Logicos {
    public static void main(String[] args) {
        // Os operadores lógicos em java são:
        // && e, || ou, ^ ou exclusivo, ! não

        int x = 3;
        int y = 5;
        int z = 7;
        String nome1 = "Pamela";
        String nome2 = "Pamella";
        boolean teste;

        // Testes Logicos com &&
        teste = (x > y && x < z) ? true : false;
        System.out.println(teste); // f && v = false(tambem vale o contrario)

        teste = (x < y && y < z) ? true : false;
        System.out.println(teste); // v && v = true

        teste = (x == y && x > z) ? true : false;
        System.out.println(teste); // f && f = false

        // Testes Logicos com ||
        teste = (x < z || nome1.equals(nome2)) ? true : false;
        System.out.println(teste); // v || f = true(tambem vale o contrario)

        teste = (x != z || y < z) ? true : false;
        System.out.println(teste); // v || v = true
        // false só ocorre se f || f

        // Teste Logicos com ^
        teste = (x != z ^ y < z) ? true : false;
        System.out.println(teste); // v ^ v = false
        // v ^ f = true(tambem vale o contrario), f ^ f = false

        // Teste Lógico com ! (inverte toda expressão)
        teste = !(x != z ^ y < z) ? true : false;
        System.out.println(teste); // !v ^ v = !false = true
    }
}
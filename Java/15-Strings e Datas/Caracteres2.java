class Caracteres2 {
    public static void main(String[] args) {
        // Este método deixa toda String em caixa alta
        String pais = "Portugal";
        System.out.println(pais.toUpperCase());

        // Este deixa toda em caixa baixa
        String a = "CARRO";
        System.out.println(a.toLowerCase());

        // substring pode exibir apenas um pedaço da String
        String b = "Hey Jude, don't make it bad";
        System.out.println(b.substring(0, 6)); // Exibir do primeiro ao sétimo caracter(começa pelo 0)
        System.out.println(b.substring(8, 15));// Começa exibindo a partir do nono caracter até o decimo sexto

        // Método trim remove espaços do inicio e do fim da String
        String c = " java ";
        System.out.println(c.trim());

        // Replace substitui a ocorrencia de uma palavra por outra
        String carro = "Nissan 350Z";
        System.out.println(carro.replace("350Z", "Skyline"));

        // Para capitalizar uma String podemos usar os métodos anteriores
        String d = "java";
        String cap = d.substring(0, 1).toUpperCase();
        System.out.println(cap + d.substring(1));
    }
}
class Vetores2 {
    public static void main(String args[]) {

        int[] num = { 2, 4, 3, 5 };
        String[] carros = { "Skyline", "Supra", "Camaro" };

        // Tambem podemos exibir um vetor usando outro tipo de for

        System.out.println("Vetor num");
        // for(tipo variavel : nomeVetor)
        // Tipo de variavel deve ser do mesmo tipo do vetor a ser percorrido
        for (int valor : num) {
            System.out.print(valor + " ");
        }

        System.out.println("");
        System.out.println("Vetor carros");
        for (String carro : carros) {
            System.out.print(carro + " ");
        }
    }
}
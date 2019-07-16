//Enumeração
enum Letras {
    a, b, c, d, e, f, g
}

class Enumeracao2 {
    public static void main(String[] args) {
        // Podemos colocar todos valores da enumeração dentro de um vetor(tipo deve ser
        // o mesmo da enumeração)
        Letras[] arranjo = Letras.values();

        // Vamos percorrer este vetor
        for (Letras let : arranjo) {
            System.out.println(let + " no indice " + let.ordinal()); // ordinal() mostra indice de cada elemento da
                                                                     // enumeração

        }
    }
}
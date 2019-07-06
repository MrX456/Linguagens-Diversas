import java.util.Arrays;

class BuscaBinaria {
    public static void main(String args[]) {
        // Podemos procurar um determinado valor dentro de uma vetor usando o método de
        // busca Busca Binaria
        // para utiliza-lo devemos importar util.Arrays

        int[] numeros = { 2, 4, 5, 1, 6, 8 };

        for (int valor : numeros) {
            System.out.print(valor + " ");
        }

        System.out.println("");

        // Vamos usar busca binaria para encontrar o indice de um elemento especificado
        // Arrays.binarySearch(nomeVetor: elemento)
        int pos = Arrays.binarySearch(numeros, 6); // esta na posição 4
        System.out.println("Elemento 6 na posicao " + pos);
    }
}
class BubbleSort {
    // Podemos ordenar um vetor através de alguns métodos criados por programadores
    // Este método é chamado BubbleSort
    static int[] bubbleSort(int vetor[]) {
        int tamanho = vetor.length;
        int comparacao = 0;
        int trocas = 0;

        for (int i = tamanho - 1; i >= 1; i--) {
            for (int j = 0; j < i; j++) {

                comparacao++;

                if (vetor[j] > vetor[j + 1]) {

                    int aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                    trocas++;
                }
            }
        }

        return vetor;
    }

    public static void main(String[] args) {
        // Vetor esta fora de ordem
        int[] vet = { 4, 2, 1, 8, 3 };

        System.out.println("Vetor original");
        for (int v : vet) {
            System.out.print(v + " ");
        }

        System.out.println();

        // Vamos invocar o método passando vetor vet como argumento
        bubbleSort(vet);
        System.out.println("Apos Bubblesort");
        for (int v : vet) {
            System.out.print(v + " ");
        }
    }
}
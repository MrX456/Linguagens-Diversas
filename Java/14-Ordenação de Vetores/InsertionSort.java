class InsertionSort {
    // Podemos ordenar um vetor através de alguns métodos criados por programadores
    // Este método é chamado InsertionSort
    static int[] insertionSort(int[] vetor) {
        int i, j, atual;

        for (i = 1; i < vetor.length; i++) {

            atual = vetor[i];
            j = i;

            while ((j > 0) && (vetor[j - 1] > atual)) {

                vetor[j] = vetor[j - 1];
                j = j - 1;
            }

            vetor[j] = atual;
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
        insertionSort(vet);
        System.out.println("Apos InsertionSort");
        for (int v : vet) {
            System.out.print(v + " ");
        }
    }
}
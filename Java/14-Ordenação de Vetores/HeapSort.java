class HeapSort {
     // Podemos ordenar um vetor através de alguns métodos criados por programadores
    // Este método é chamado HeapSort
    static int[] heapSort(int[] vetor){
        buildMaxHeap(vetor);
        int n = vetor.length;
        
        for(int i = vetor.length - 1; i > 0; i--) {
            swap(vetor, i, 0);
            maxHeapify(vetor, 0, --n);
        }
        
        return vetor;
    }
    
    //Métodos adicionais
    static void buildMaxHeap(int[] v) {
        for(int i = v.length / 2 - 1; i >= 0; i--) {
            maxHeapify(v, i, v.length);
        }
    }
    
    static void maxHeapify(int[] v, int pos, int n) {
        int max = 2 * pos + 1, right = max + 1;
        if(max < n) {
            if(right < n && v[max] < v[right]) {
                max = right;
            }
            if(v[max] > v[pos]) {
                swap(v, max, pos);
                maxHeapify(v, max, n);
            }
        }
    }
    
    static void swap(int[] v, int j, int aposJ) {
        int aux = v[j];
        v[j] = v[aposJ];
        v[aposJ] = aux;
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
        heapSort(vet);
        System.out.println("Apos HeapSort");
        for (int v : vet) {
            System.out.print(v + " ");
        } 
    }
}
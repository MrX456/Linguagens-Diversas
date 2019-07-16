class SelectionSort {
   // Podemos ordenar um vetor através de alguns métodos criados por programadores
    // Este método é chamado SelectionSort
    static int[] selectionSort(int[] vetor){
       int min;
       int aux;
       
       for(int i = 0; i < vetor.length; i++) {
           min = i;
           
           for(int j = i; j < vetor.length; j++) {
               
               if(vetor[j] < vetor[min]) {
                   
                   min = j;
               }
               
               if(min != i) {
                   aux = vetor[min];
                   vetor[min] = vetor[i];
                   vetor[i] = aux;
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
         selectionSort(vet);
         System.out.println("Apos SelectionSort");
         for (int v : vet) {
             System.out.print(v + " ");
         }
    }
}
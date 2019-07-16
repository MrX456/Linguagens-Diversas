class ShellSort {
    // Podemos ordenar um vetor através de alguns métodos criados por programadores
    // Este método é chamado ShellSort
    static int[] shellSort(int[] vetor){
        int h = 1;
        int n = vetor.length;
        
        while(h < n) {
            h *= 3 + 1;
        }
        
        h /= 3;
        int c;
        int j;
        
        while(h > 0) {
            for(int i = h; i < n; i++) {
                c = vetor[i];
                j = i;
                while(j >= h && vetor[j - h] > c) {
                    
                    vetor[j] = vetor[j - h];
                    j -= h;
                }
                
                vetor[j] = c;
            }
            
            h /= 2;
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
        shellSort(vet);
        System.out.println("Apos ShellSort");
        for (int v : vet) {
            System.out.print(v + " ");
        }
    }
}
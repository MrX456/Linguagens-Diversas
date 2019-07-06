import java.util.Arrays; //Necessario para usar sort

class Ordena {
    public static void main(String args[]) {
        // Em java um vetor pode ser ordenado com Arrays.sort
        int[] num = { 4, 1, 6, 3, 2 };

        // Este método é do próprio java
        Arrays.sort(num);

        // Agora só exibir vetor ordenado
        for (int valor : num) {
            System.out.print(valor + " ");
        }
    }
}
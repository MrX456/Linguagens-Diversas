import java.util.Arrays;

class PreencheVetor {
    public static void main(String args[]) {
        // Podemos prrencher automaticamente um vetor com o método fill
        // importar util.Arrays

        int[] val = new int[25]; // 25 posições
        Arrays.fill(val, 0);// Preenche somente com 0

        for (int v : val) {
            System.out.print(v + " ");
        }
    }
}
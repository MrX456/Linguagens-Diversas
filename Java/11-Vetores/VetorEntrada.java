import java.util.Scanner;

class VetorEntrada {
    public static void main(String args[]) {
        // Vamos preencher um vetor usando o scanner
        Scanner entrada = new Scanner(System.in);
        int[] numeros = new int[6]; // Vetor possui 6 posições
        int n;

        System.out.println("Preenchendo um vetor");

        for (int i = 0; i < numeros.length; i++) {
            System.out.println("Digite um numero :");
            n = entrada.nextInt();
            numeros[i] = n;
        }

        // Agora vamos exibir o vetor
        System.out.println("Seu vetor criado foi:");
        for (int val : numeros) {
            System.out.print(val + " ");
        }
        entrada.close();
    }
}
import java.util.Scanner;

class Numeros {
    public static void main(String args[]) {
        int n;
        int soma = 0;
        String resp;
        Scanner entrada = new Scanner(System.in);

        do {
            System.out.println("Digite um numero :");
            n = entrada.nextInt();
            soma += n; // soma = soma + n
            System.out.println("Deseja continuar? [s/n]");
            resp = entrada.next(); // Se colocassemos Line esta linha não seria executada
        } while (resp.equals("s"));
        // Enquanto resp for s este laço sera executado
        System.out.println("A soma dos valores digitados e : " + soma);
        entrada.close();
    }
}
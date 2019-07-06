import java.util.Scanner;

class MatrizEntrada {
    public static void main(String args[]) {
        // Vamos receber comandos de entrada e criar uma matriz

        Scanner entrada = new Scanner(System.in);

        System.out.println("Entre com o numero de garagens :");
        int garagens = entrada.nextInt();

        String[][] carros = new String[garagens][];

        // esta matriz tera tamanho variavel e podera ser irregular
        for (int i = 0; i < carros.length; i++) {

            System.out.println("Entre com a quantidade de carros :");
            int qtdeCarros = entrada.nextInt();

            carros[i] = new String[qtdeCarros];

            // Vamos colocar os nomes dos carros
            for (int j = 0; j < carros[i].length; j++) {
                System.out.println("Digite o nome do carro " + (j + 1)); // Para contar a partir do 1
                carros[i][j] = entrada.next();
            }
        }

        System.out.println("--------------------------");

        // Agora vamos exibir a matriz
        for (int i = 0; i < carros.length; i++) {
            for (int j = 0; j < carros[i].length; j++) {
                System.out.print(carros[i][j] + " ");
            }
            System.out.println();
        }
        entrada.close();
    }
}
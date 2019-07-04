import java.util.Scanner;

class SwitchCase {
    public static void main(String[] args) {
        // Aqui temos um condicional que pode testar multiplas condições
        Scanner entrada = new Scanner(System.in);
        int x;
        int y;
        int operacao;

        System.out.println("Digite um numero :");
        x = entrada.nextInt();

        System.out.println("Digite outro numero :");
        y = entrada.nextInt();

        System.out.println("Digite 1 para soma");
        System.out.println("Digite 2 para subtracao");
        System.out.println("Digite 3 para multiplicacao");
        System.out.println("Digite 4 para divisao");
        operacao = entrada.nextInt();

        // Vamos realizar a operação escolhida pelo usuario através dos 4 numeros
        switch (operacao) {
        // soma
        case 1:
            System.out.println("Soma " + (x + y));
            break; // Não excecuta as demais opções se executar esta
        // subtracao
        case 2:
            System.out.println("Subtracao " + (x - y));
            break;
        // multiplicacao
        case 3:
            System.out.println("Multiplicacao " + (x * y));
            break;
        // divisao
        case 4:
            // Vamos usar variavel para retornar parte decimal.Precisamos de dois
            // double para poder retornar a parte decimal
            double w = x;
            double z = y;

            System.out.println("Divisao " + (w / z));
            break;
        // Qualquer outra tecla apertada
        default:
            System.out.println("Valor invalido!");
        }

        entrada.close();
    }
}
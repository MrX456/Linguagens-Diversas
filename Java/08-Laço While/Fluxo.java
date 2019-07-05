class Fluxo {
    public static void main(String[] args) {
        // Vamos interromper o fluxo do laço usando continue
        int contador = 0;

        // Enquanto o contador for menor ou igual 10 ele vai incrementar
        while (contador < 10) {
            contador++;
            // Quando o contador valer 5 ou 8 ele vai ignorar o que esta abaixo do continue
            // e vai para a proxima iteração (5 e 8 não serão exibidos)
            if (contador == 5 || contador == 8)
                continue;
            System.out.println(contador);
        }

        System.out.println("Contagem finalizada!");

        System.out.println("Contagem 2");

        // Ja o break sai do laço e vai para o bloco de comandos seguinte
        int cont = 0;
        while (cont < 10) {
            System.out.println(cont);
            cont++;
            if (cont == 6)
                break; // Se cont vale 6 vai sair imediatamente deste laço e vai imprimir até 5
        }
        System.out.println("Contagem interrompida!");
    }
}
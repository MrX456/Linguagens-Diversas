class Passo {
    public static void main(String args[]) {
        // Podemos incermentar ou decrementar um for com qualquer valor

        System.out.println("Contador 0 a 10 passo 2");
        for (int i = 0; i <= 10; i += 2) {
            System.out.print(i + " ");
        }

        System.out.println("\nContador 0 a 50 passo 5");
        for (int i = 0; i <= 50; i += 5) {
            System.out.print(i + " ");
        }
    }
}
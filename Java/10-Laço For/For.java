class For {
    public static void main(String args[]) {
        //Temos mais uma estrutra de repetição o for
        //A declaração condição de parada e incremento ou decremento
        //são feitos dentro da estrutura

        System.out.println("Contador de 0 a 10");
        for(int cont = 0; cont <= 10; cont++) {
            System.out.print(cont +" ");
        }

        System.out.println("\nContador de 10 a 0");
        for(int cont = 10; cont >= 0; cont--) {
            System.out.print(cont +" ");
        }
    }
}
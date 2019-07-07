class Metodo2 {
    // Este método soma dois valores e não retorna nada (void)
    // Precisamos de dois parametros para somar(tipo nome, tipo nome)
    static void soma(int a, int b) {
        int s = a + b;
        System.out.println(s);
    }

    public static void main(String args[]) {
        System.out.println("4 + 5");
        // Chamar metodo e passar os numero a serem somados(metodo deve ser static)
        soma(4, 5);
    }
}
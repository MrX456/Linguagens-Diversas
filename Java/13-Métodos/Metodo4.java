class Metodo4 {
    // Este método retorna um valor(função) de uma soma e sera armazenado em uma
    // variavel
    static int soma(int x, int y) {
        int s = x + y;
        return s; // Este valor fica armazenado
    }

    public static void main(String args[]) {
        // Vamos armazenar resultado do método em uma variavel
        // s não pode ser chamado aqui pois não existe mais, apenas o seu retorno foi
        // armazenado
        int sm = soma(3, 5);
        System.out.println("A soma de  3 + 5 e " + sm);
    }
}
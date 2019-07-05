class ContadorRev {
    public static void main(String[] args) {
        // O contador vai ser reverso de 10 a 0
        int contador = 10;

        // Enquanto o contador for maior ou igual 0 ele vai decrementar
        while (contador >= 0) {
            System.out.println(contador);
            contador--;
        }
        // Quando atingir valor especificado(0) o laço se encerra

        System.out.println("Contagem finalizada!");
    }
}

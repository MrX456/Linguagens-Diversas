class Contador {
    public static void main(String[] args) {
        // Vamos usar o laço while para fazer uma contagem até 10
        int contador = 0;

        // Enquanto o contador for menor ou igual 10 ele vai incrementar
        while (contador <= 10) {
            System.out.println(contador);
            contador++;
        }
        // Quando atingir valor especificado(10) o laço se encerra

        System.out.println("Contagem finalizada!");
    }
}
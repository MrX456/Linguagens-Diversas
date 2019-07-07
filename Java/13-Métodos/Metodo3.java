class Metodo3 {
    // Este método retorna um valor(função) portanto void será
    // substituido pelo tipo de retorno

    static String ola() { // Queremos que retorne String e metodo precisa ser estatico para ser chamado no
                          // main
        String o = "Ola mundo!";
        return o; // Retornar variavel o;
    }

    public static void main(String args[]) {
        System.out.println("Chamando metodo");
        // Agora podemos armazenar retorno em uma variavel e exibir
        String oi = ola();
        System.out.println(oi);
    }
}
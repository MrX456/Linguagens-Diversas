class Excecoes7 {

    public static void main(String[] args) {

        // Temos métodos uteis que nos ajudam a verificar as exceções
        int[] num = { 2, 4, 8, 16, 32, 64 };
        int[] div = { 2, 0, 4, 8, 0 };

        for (int i = 0; i < num.length; i++) {
            try {
                System.out.println(num[i] + "/" + div[i] + " = " + (num[i] / div[i]));
            }
            // Vamos pegar uma exceção mais genérica
            catch (Exception ex) {
                // Este método retorna o tipo de exceção ocorrida
                System.out.println(ex.getMessage());
                // Este retorna onde ocorreu a exceção
                ex.printStackTrace();
            }

        }
    }
    // Obs: Estes métodos são utilizados apenas para o desenvolvimento, nunca devem
    // ser
    // passados ao usuario final

}
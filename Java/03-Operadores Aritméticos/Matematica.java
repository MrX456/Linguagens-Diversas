class Matematica {
    public static void main(String[] args) {
        // O java possui uma classe para operações matematicas mais complexas
        double pi = Math.PI; // Pi
        int x = 2;
        int y = 3;
        double potencia = Math.pow(x, y); // 2^3
        double raiz = Math.sqrt(25); // Raiz quadrada
        double cubica = Math.cbrt(8); // Raiz cubica

        // Método random gera numero aleatório entre 0 e 1(sempre double)
        double ale = Math.random();

        // Se quisermos um intevalo fora deste valor precisamos usar operações
        // matematicas
        // De 5 a 10 (apenas inteiros)usar typecast
        int rand = (int) (5 + Math.random() * (10 - 5));
        // de 15 a 50
        int rand2 = (int) (15 + Math.random() * (50 - 15));

        System.out.println(pi);
        System.out.println(potencia);
        System.out.println(raiz);
        System.out.println(cubica);
        System.out.println(ale);
        System.out.println(rand);
        System.out.println(rand2);
    }

}
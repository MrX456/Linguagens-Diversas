class Conversoes {
    public static void main(String[] args) {
        /* Conversões de tipos de variaveis através de métodos */

        /* Qualquer tipo numerico para String */
        int x = 4;
        float y = 2.32f;
        double z = 1.445;

        String a = Integer.toString(x); /* int para String */
        String b = Float.toString(y); /* float para String */
        String c = Double.toString(z); /* double para String */

        /* String para tipo numérico */
        String d = "2";
        String e = "4.2";
        String f = "51";

        int i = Integer.parseInt(d);
        double j = Double.parseDouble(e);
        long k = Long.parseLong(f);

        /* Exibindo variaveis */
        System.out.println("Conversoes para string");
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);

        System.out.println("Conversoes para tipos numericos");
        System.out.println(i);
        System.out.println(j);
        System.out.println(k);
    }
}
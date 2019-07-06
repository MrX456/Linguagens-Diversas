class Meses {
    public static void main(String args[]) {
        // Vamos mostra a qtde de dias de cada mes

        String[] mes = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
                        "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};
        int[] dia = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        System.out.println(" Mes  Dias");
        for(int i = 0; i < mes.length; i++) {
            System.out.println(mes[i] +"   " + dia[i]);
        }
    }
}
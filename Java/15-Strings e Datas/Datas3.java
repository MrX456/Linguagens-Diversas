import java.util.Calendar;
import java.util.GregorianCalendar;

class Datas3 {
    public static void main(String[] args) {
        // Também temos a classe GregorianCalendar para trabalhar com datas no java
        GregorianCalendar agora = new GregorianCalendar();

        // este método verifica se ano é bissexto
        System.out.println("Este ano e bissexto(2019)? " + agora.isLeapYear(2019));
        System.out.println("2020 e bissexto? " + agora.isLeapYear(2020));

        // Podemos instanciar qualquer data com gregorian calendar
        GregorianCalendar data1 = new GregorianCalendar(1991, 1, 21);// 21/02/1991(lembrando que no java começa no mes
                                                                     // 0)
        /* Exibindo esta data */
        System.out.println(data1.get(Calendar.DAY_OF_MONTH) + "/" + (data1.get(Calendar.MONTH) + 1) + "/"
                + data1.get(Calendar.YEAR));

        System.out.println();

        // Tambem podemos passar a hora junto com a data
        GregorianCalendar data2 = new GregorianCalendar(1991, 1, 21, 13, 30, 50);

        System.out.println("Dia : " + data2.get(Calendar.DAY_OF_MONTH) + "/" + (data2.get(Calendar.MONTH) + 1) + "/"
                + data2.get(Calendar.YEAR));

        System.out.println("Hora : " + data2.get(Calendar.HOUR_OF_DAY) + ":" + data2.get(Calendar.MINUTE) + ":"
                + data2.get(Calendar.SECOND));
    }
}
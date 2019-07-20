import java.util.Calendar;
import java.util.GregorianCalendar;
import java.text.SimpleDateFormat;
import java.text.ParseException;
import java.util.Date;

class Datas4 {
    public static void main(String[] args) {
        // Para datas quaisquer usamos sempre GregorianCalendar
        Calendar data = new GregorianCalendar(2010, 3, 22, 12, 50, 22);
        // Pegar apenas ano
        SimpleDateFormat sdf = new SimpleDateFormat("y");
        System.out.println(sdf.format(data.getTime())); // Apenas ano é exibido completo

        // Pegar dia mes e ano
        SimpleDateFormat sdf2 = new SimpleDateFormat("dd/MM/yyyy");
        System.out.println(sdf2.format(data.getTime()));

        // Dia mes(escrito) e ano
        SimpleDateFormat sdf3 = new SimpleDateFormat("dd/MMM/yyyy");
        System.out.println(sdf3.format(data.getTime()));

        // Hora minuto e segundo
        SimpleDateFormat sdf4 = new SimpleDateFormat("HH:mm:ss");
        System.out.println(sdf4.format(data.getTime()));

        // Horario am pm
        SimpleDateFormat sdf5 = new SimpleDateFormat("hh:mm:ss a");
        System.out.println(sdf5.format(data.getTime()));

        // io
        SimpleDateFormat sdf6 = new SimpleDateFormat("z // Z");
        System.out.println(sdf6.format(data.getTime()));

        //   Dia da semana
        SimpleDateFormat sdf7 = new SimpleDateFormat("E - dd/MMM/yyy");
        System.out.println(sdf7.format(data.getTime()));

        //Podemos pegar uma String e converte-la para objeto data 
        String minhaData = "20/02/2000";
        //Este método pode gerar uma exceção se for passado um valor invalido
        try {
            Date dataDate = sdf2.parse(minhaData);//tenta converter string para Date
            System.out.println(sdf7.format(dataDate));
        }
        catch(ParseException ex) {
            ex.printStackTrace();
        }
    }
}
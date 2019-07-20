
import java.text.DateFormat;
import java.text.ParseException;
import java.util.Calendar;
import java.util.Date;
import java.util.Locale; 


public class Datas5 {
    public static void main(String[] args) {
       //Podemos formatar datas tambem com o DateFormat
        Date hoje = new Date();
        
        System.out.println(hoje);
        
        //A data será convertida para uma String
        String hojeFormatado = DateFormat.getInstance().format(hoje);
        System.out.println(hojeFormatado);
        
        //Agora vamos mudar o Locale padrão e ver como data é exibida
        Locale.setDefault(new Locale("en", "US"));
        
        System.out.println("Locale US");
        hojeFormatado = DateFormat.getInstance().format(hoje);
        System.out.println(hojeFormatado);
        
        //Para pegar somente horário
        hojeFormatado = DateFormat.getTimeInstance().format(hoje);
        System.out.println(hojeFormatado);
        
        //Para pegar somente data
        hojeFormatado = DateFormat.getDateInstance().format(hoje);
        System.out.println(hojeFormatado);
        
        //Formato curto da hora
        hojeFormatado = DateFormat.getTimeInstance(DateFormat.SHORT).format(hoje);
        System.out.println(hojeFormatado);
        
         //Formato médio da hora
        hojeFormatado = DateFormat.getTimeInstance(DateFormat.MEDIUM).format(hoje);
        System.out.println(hojeFormatado);
        
         //Formato longo da hora(com fuso horario)
        hojeFormatado = DateFormat.getTimeInstance(DateFormat.LONG).format(hoje);
        System.out.println(hojeFormatado);
        
        //Podemos usar o método em data e hora
        hojeFormatado = DateFormat.getDateTimeInstance(DateFormat.MEDIUM,DateFormat.SHORT).format(hoje);
        System.out.println(hojeFormatado);
        
        //Podemos converter uma String para data, mas deve estar no formato correto
        //para a conversão ser bem sucedida
        String data = "02/12/2004 02:25 PM";
        try {
            Date dataDate = DateFormat.getInstance().parse(data);
            System.out.println(dataDate);
            
            //Tambem podemos transformar Date em Calendar
            Calendar calendario = Calendar.getInstance();
            calendario.setTime(dataDate);
            
            System.out.println(calendario);
            
        } catch (ParseException ex) {
            System.out.println("Data invalida");
        }
        
    }
}


import java.time.LocalDateTime;
import java.time.OffsetDateTime;
import java.time.ZoneId;
import java.time.ZoneOffset;
import java.time.ZonedDateTime;
import java.util.Calendar;
import java.util.Date;
import java.util.Set;

public class Fuso {

    public static void main(String[] args) {
        // A partir do java 8 tambem temos classes mais simples para trabalhar
        // com fuso horario

        // Classe ZoneId
        ZoneId fuso = ZoneId.systemDefault(); // Mostra fuso padrão do sistema
        System.out.println(fuso);

        System.out.println("Todos Zone Ids");

        /*
         * Podemos ver todos os ZoneIds(retorno em forma de coleção) Set<String> fusos =
         * ZoneId.getAvailableZoneIds(); for(String f : fusos) { System.out.println(f);
         * }
         */

        // Vamos pegar o fuso de Cairo(Egito)
        ZoneId egito = ZoneId.of("Africa/Cairo");

        // Data e horario com fuso horario
        ZonedDateTime zdt = ZonedDateTime.of(LocalDateTime.parse("2019-02-16T20:25:10"), egito);
        System.out.println(zdt);
        // Aqui vamos utilizar a conversão de String
        System.out.println(ZonedDateTime.parse("2019-02-16T20:25:10+02:00[Africa/Cairo]"));

        // Adicionar offset
        ZoneOffset offset = ZoneOffset.of("+02:00");
        // Data completa(agora) com offset criado
        OffsetDateTime offsetdt = OffsetDateTime.of(LocalDateTime.now(), offset);
        System.out.println(offsetdt);

        // Vamos verificar a data e hora agora no Egito(fuso Cairo)
        Date data = new Date();
        Calendar c = Calendar.getInstance();
        // Usando objeto data de Date
        LocalDateTime ldtData = LocalDateTime.ofInstant(data.toInstant(), egito);
        System.out.println("Data e horario Egito");
        System.out.println(ldtData);
        // Usando classe Calendar
        System.out.println(LocalDateTime.ofInstant(c.toInstant(), egito));

        // Vamos ver a data e o horario no Japão agora
        // ZoneId do Japão
        ZoneId japao = ZoneId.of("Japan");
        System.out.println("Horario agora no Japao");
        System.out.println(LocalDateTime.ofInstant(data.toInstant(), japao));

    }

}

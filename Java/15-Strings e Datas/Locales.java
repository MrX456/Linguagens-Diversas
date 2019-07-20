
import java.text.NumberFormat;
import java.util.Locale;

class Locales {
    public static void main(String[] args) {

        // Padrão do sistema do usuario
        Locale locale = Locale.getDefault();

        System.out.println(locale);

        // para ver todos Locales disponiveis no java podemos fazer
        Locale[] locales = Locale.getAvailableLocales();
        for (Locale loc : locales) {
            System.out.println("Local : " + loc.getDisplayName());
            System.out.println("Codigo : " + loc.getLanguage());
            System.out.println("Lingua : " + loc.getDisplayLanguage());
            System.out.println("Cod Pais : " + loc.getCountry());
            System.out.println("Pais : " + loc.getDisplayCountry());

            System.out.println("--------------------------");
        }

        // Podemos definir um Locale inicializando um objeto
        // Brasil será definido como Locale padrão
        Locale brasil = new Locale("pt", "BR");
        System.out.println(brasil);

        // Aqui definimos este locale como padrão em uma aplicação
        Locale.setDefault(brasil);
        // Agora ptbr é o Locale padrão desta aplicação
        System.out.println("Padrao : " + Locale.getDefault());

        System.out.println("------------------------------");

        // Agora vamos verificar a formatação de moeda de alguns lugares

        // Locale padão(agora Brasil)
        System.out.println("Brasil");
        NumberFormat nf = NumberFormat.getCurrencyInstance();
        System.out.println(nf.format(500000000d));

        // USA
        System.out.println("USA");
        NumberFormat nf2 = NumberFormat.getCurrencyInstance(Locale.US);
        System.out.println(nf2.format(500000000d));

        // Italia
        System.out.println("Italia");
        NumberFormat nf3 = NumberFormat.getCurrencyInstance(Locale.ITALY);
        System.out.println(nf3.format(500000000d));

        // Japão
        System.out.println("Japao");
        NumberFormat nf4 = NumberFormat.getCurrencyInstance(Locale.JAPAN);
        System.out.println(nf4.format(500000000d));
    }
}

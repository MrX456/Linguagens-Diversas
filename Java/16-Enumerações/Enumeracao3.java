enum Dia {
    domingo, segunda, terca, quarta, quinta, sexta, sabado
}

class Enumeracao3 {
    public static void main(String[] args) {
        Dia hoje = Dia.terca;
        Dia ontem = Dia.segunda;
        Dia amanha = Dia.quarta;

        System.out.println("Hoje e " + hoje);
        System.out.println("Ontem foi " + ontem);
        System.out.println("Amanha sera " + amanha);

    }
}
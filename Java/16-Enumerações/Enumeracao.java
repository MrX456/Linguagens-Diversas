//Enumerações devem ficar fora da classe
// Podemos usar enumerações para mostrar os meses
enum Mes {
    JANEIRO, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
};

class Enumeracao {
    public static void main(String[] args) {
        // Agora podemos criar objetos de Mes e atribuir qualquer valor da enumeração
        Mes primeiro = Mes.JANEIRO;
        Mes ultimo = Mes.DEZEMBRO;

        System.out.println("O primeiro mes do ano e " + primeiro);
        System.out.println("O ultimo mes do ano e " + ultimo);
    }
}
public class MultiploDeTres {
	public static void main(String[] args) {
		// Aqui podemos encontrar todos multiplos de 3 de 0 a 100
		System.out.println("Multiplos de 3 de 0 ate 100");

		for (int i = 1; i <= 100; i++) {
			if (i % 3 == 0) {
				System.out.println(i);
				// Todos numeros divisiveis por 3 com resto 0 serão impressos
			}
		}
	}
}
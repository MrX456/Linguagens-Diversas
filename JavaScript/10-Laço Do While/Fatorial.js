//Este programa calcula o fatorial do número digitado
//pelo usuario. Vamos limitar até 10

var c, f, num;

do {
    num = prompt("Digite um inteiro de 1 a 10 para ver seu fatorial [Digite -1 para sair]");

    if ((num >= 1) && (num <= 10)) {

        c = num;
        f = 1;

        do {
            f *= c;
            c -= 1;
        } while(c >= 1);

        alert("O fatorial de " + num + " é " + f);

    }
    else if(num != -1) {

        alert("Número inválido");

    }

} while (num != -1);

document.write("Programa encerrado");



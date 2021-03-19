//Este program calcula o somatório de 1 a n digitado pelo usuário

var contador = 1,
    soma = 0,
    n;

n = prompt("Digite um numero para ver o somatório :");

do {

    soma += contador;
    contador++;

} while (contador <= n);

alert("O somatório de 1 a " + n + " é " + soma);

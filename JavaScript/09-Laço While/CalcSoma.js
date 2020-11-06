//Calculadora de soma usando while
//É necessario converter os valores para numeros
var op = prompt("Quantas operações deseja fazer?");
var i = 1;
while (i <= op) {
    var x = prompt("Digite um valor");
    var y = prompt("Digite outro valor");
    var sum = Number(x) + Number(y);
    alert("A soma de " + x + " + " + y + " = " + sum);
    ++i;
} 
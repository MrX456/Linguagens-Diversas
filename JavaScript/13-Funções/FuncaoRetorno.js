//Vamos utilizar agora uma função que retorna valores
function Quadrado(num) {
    if (isNaN(num)) { //Se num não for um numero
        return "Valor invalido (Digite um numero)";
    }
    return num * num;
}
var n = prompt("Digite um numero");
document.write("O quadrado de " + n + " é " + Quadrado(n));
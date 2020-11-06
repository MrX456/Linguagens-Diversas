//Contador Inteligente
var cont;
var i = prompt("Digite um numero");
var j = prompt("Até quanto deseja contar?");
if (i < j) {
    for (cont = i; cont <= j; cont++) {
        document.write(cont + "   ");
    }
}
else {
    for (cont = i; cont >= j; cont--) {
        document.write(cont + "    ");
    }
}
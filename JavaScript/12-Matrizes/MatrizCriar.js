//Vamos criar uma matriz que recebe comados do usuario
//O usuario define o numero de linha e colunas
var Linha = prompt("Digite a quantidade de linhas");
var Coluna = prompt("Digite o numero de colunas");
alert("Criar matriz de " + Linha + " x " + Coluna);

var Matriz = [];
for (i = 0; i < Linha; i++) {
    Matriz[i] = [];
    for (j = 0; j < Coluna; j++) {
        Matriz[i][j] = "";
    }
}
for (var l = 0; l < Linha; l++) {
    for (var c = 0; c < Coluna; c++) {
        Matriz[l][c] = prompt("Digite um valor para ser inserido na matriz");
    }
}
//Agora vamos mostrar na tela o conteudo da matriz
var aux = "";
for (var l = 0; l < Linha; l++) {
    for (var c = 0; c < Coluna; c++) {
        if (c < Coluna - 1) {
            aux += Matriz[l][c] + " \t\t";
        }
        else {
            aux += Matriz[l][c] + " \n";
        }
    }
}
alert("Conteudo da Matriz:\n" + aux);
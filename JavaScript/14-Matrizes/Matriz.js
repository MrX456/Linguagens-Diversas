//Matrizes em JavaScript (|Vetor de Vetores)
//Criamos uma estrutura similar para trabalhar com esse tipo de dados
//Criamos um vetor dentro de outro
var Grid = [
    ["Supra", "Mustang"],//Temos 1 linha e 2 colunas
    ["Skyline", "GTO"], //Temos outra linha
    ["Audi TT", "Corvette"]
]
//Visualizar o conteudo da matriz
//Vamos exibir o conteudo situado na linha 3 (primeiro []) coluna 1(segundo[]).
//Lembrando que começamos da posição [0] para ambos
document.write("O Quinto colocado é " + Grid[2][0] + "<br/>");
document.write("O Pole Position é " + Grid[0][0] + "<br/>");
document.write("--------------------------------" + "<br/>");
//Para ver todos elementos ao mesmo tempo
document.write(Grid + "<br/>");//Sera exibido tudo em uma linha mas em ordem
document.write("--------------------------------" + "<br/>");
//Para exibir a matriz de forma correta precisamos de dois FOR
//Primeiro vamos exibir em forma de lista porem ordenada
var car = "";
for (l = 0; l <= 2; l++) {//Varrera linha por linha
    for (c = 0; c <= 1; c++) { //Varrera cada coluna (temos 2)
        car += Grid[l][c] + "\n";//Concatenar variavel auxiliar com ordenção entre linhas e colunas e uma quebra de linha
    }
}
alert("Grid \n" + car); //Exibição em forma de popup

//Agora na forma original da matriz (nesse caso 3x2)
var car = "";
for (l = 0; l <= 2; l++) {
    for (c = 0; c <= 1; c++) {
        if (c < 1) {
            car += Grid[l][c] + " \t\t"//Tabulações para espaçar melhor
        }
        else {
            car += Grid[l][c] + "\n"; //Agora vem a quebra de linha(temos 2 elementos na coluna)
        }
    }
}
alert("Grid \n" + car); 
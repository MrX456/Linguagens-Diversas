//Vamos usar o laço FOR para mostrar todos elementos do arranjo na ordem por posição
var Cidades = ["São Paulo", "Recife", "Salvador", "Natal"];
var i; //Necessario para iterar a cada posição do arranjo(começa na posição 0)
for (i = 0; i < 4; i++) {
    document.write(Cidades[i] + " posição" + [i] + "<br/>");
}
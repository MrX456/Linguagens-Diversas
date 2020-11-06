//Podemos unir dois ou mais arrays atraves do metodo CONCAT
//Temos 5 arrays representando as regiões do Brasil.
var Sudeste = ["SP", "RJ", "ES", "MG"];
var Sul = ["RS", "SC", "PR"];
var CentroOeste = ["MS", "MT", "GO", "DF"];
var Nordeste = ["PI", "MA", "CE", "RN", "PB", "PE", "SE", "AL", "BA"];
var Norte = ["AC", "AM", "AP", "RO", "RR", "PA", "TO"];
//Vamos juntar tudo para formar o mapa do Brasil completo
var MapaBrasil = Nordeste.concat(Sudeste, Norte, Sul, CentroOeste);

document.write("<br/>Mapa Completo Listado <br/><br/>");
MapaBrasil.sort();//Ordenar alfabeticamente
for (i = 0; i < MapaBrasil.length; i++) {
    document.write(MapaBrasil[i] + "<br/>");
}
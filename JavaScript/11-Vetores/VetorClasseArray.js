//Tambem podemos criar um array instanciando o objeto Array
var i;
var Cidades = new Array("Campinas", "Sumaré", "Hortolândia", "Monte Mor")
//Temos um array com 4 elementos
// Com este comando podemos testar se a estrutura é um array
//Retornará TRUE se for ou FALSE se não for
document.write(Array.isArray(Cidades) + "<br/>");
//Retorna true pois definimos o array corretamente.
for (i = 0; i < 4; i++) {
   document.write(Cidades[i] + " posição" + [i] + "<br/>");
}
//Vamos mudar um elemento do arranjo e ver o que acontece
Cidades[3] = "Americana"; //Substituimos o elemento da posição 3 (Monte Mor)
document.write("------------------------" + "<br/>");
document.write(Cidades[3]); //Substituição funcionou
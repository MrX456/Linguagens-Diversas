//Conversão para uma String
var x = 20;
document.write("A variavel x é do tipo " +typeof x +"<br/>");
x= x.toString(); //Comando para conversão de tipo de variavel para string
document.write("A variavel x agora é do tipo " +typeof x  +"<br/>");
//Conversão de variavel Logica para String
var y = true;
document.write("A variavel y é do tipo " +typeof y +"<br/>");
y = y.toString();
document.write("A variavel y agora é do tipo " +typeof x  +"<br/>");


//Conversão String para Number
var a = "23";
document.write("A variavel a é do tipo " +typeof a  +"<br/>");
a = Number(a); //Comando para conversão em numero
document.write("A variavel a agora é do tipo " +typeof a  +"<br/>");


//Conversão String para inteiro
var b = "10.45";
document.write("A variavel " +b  +" é do tipo " +typeof b  +"<br/>");
b = parseInt(b); //Comando para conversão em numero inteiro(.45 não sera exibido)
document.write("A variavel " +b  +" agora é do tipo " +typeof b  +"<br/>");

//Conversão string para real(float)
var c = "12.30";
document.write("A variavel " +c  +" é do tipo " +typeof c  +"<br/>");
c = parseFloat(c);//Conversão para real (float)
document.write("A variavel " +c  +" agora é do tipo " +typeof c  +"<br/>");
//Quando trabalhamos com float podemos controlar a quantidade de casas a 
//serem exibidas atraves do metodo toFixed() arredondamento
document.write("---------------------------------------------------------" +"<br/>");
var d = 2.789012345;
document.write("<br/>" + d +"<br/>");
document.write(d.toFixed(2) +typeof d +"<br/>");//Desse modo serão exibidas apenas 2 casas depois da virgula e arrendodado para 2.79
//Ainda com numeros float podemos controlar o comprimento do numero que sera retornado
//usando toPrecision()
document.write(d.toPrecision(5));//Sera exibido o numero 2,7890(5 casas) sem arredondamento


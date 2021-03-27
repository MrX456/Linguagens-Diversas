<?php

//Operadores lógicos podem testar multiplas condições
//Os operadores lógicos em php são : &&[E] ||[OU] ![NÃO]

$x = 4;
$y = 6;
$z = 9;

echo"1 - VERDADEIRO / [NDA] - FALSO";
echo'<br/>';

//O operador && só retorna verdadeiro se todas condições
//forem verdadeiras
echo "Operador &&";
echo'<br/>';
echo $x ."<" . $y . " E ". $y . "<" . $z . " = ";
echo'<br/>';
echo ($x < $y) && ($y < $z); //v e v = v
echo'<br/>';

echo $x .">" . $y . " E ". $y . "<" . $z . " = ";
echo'<br/>';
echo ($x > $y) && ($y < $z); //f e v = f
echo'<br/>';

echo $x ."<=" . $y . " E ". $y . ">=" . $z . " = ";
echo'<br/>';
echo ($x <= $y) && ($y >= $z); //v e f = f
echo'<br/>';

echo $x ."==" . $y . " E ". $y . ">=" . $z . " = ";
echo'<br/>';
echo ($x == $y) && ($y >= $z); //f e f = f
echo'<br/>';

//O operador || só retorna falso se todas condições
//forem falsas
echo "Operador ||";
echo'<br/>';

echo $x ."<" . $y . " OU ". $y . "<" . $z . " = ";
echo'<br/>';
echo ($x < $y) || ($y < $z); // v ou v = v
echo'<br/>';

echo $x .">" . $y . " OU ". $y . "<" . $z . " = ";
echo'<br/>';
echo ($x > $y) || ($y < $z); // f ou v = v
echo'<br/>';

echo $x ."<=" . $y . " OU ". $y . ">=" . $z . " = ";
echo'<br/>';
echo ($x <= $y) || ($y >= $z); // v ou f = v
echo'<br/>';

echo $x ."==" . $y . " OU ". $y . ">=" . $z . " = ";
echo'<br/>';
echo ($x == $y) || ($y >= $z); // f ou f = f
echo'<br/>';

//O operador ! inverte o resultado do teste
echo "Operador !";
echo'<br/>';

echo "NAO " . $x ."<" . $y . " = ";
echo'<br/>';
echo !($x < $y); // não v = f
echo'<br/>';

echo "NAO " . $y .">" . $z . " = ";
echo'<br/>';
echo !($y > $z); // não f = v
echo'<br/>';

?>
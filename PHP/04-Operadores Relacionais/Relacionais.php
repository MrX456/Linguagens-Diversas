<?php

//Os operadores relacionais testam a relação entre variaveis
//Os operadores relacionais em php são
// < menor
// > maior
// <= menor ou igual
// >= maior ou igual
// == igual
// === identico(tipo também deve ser igual)

$x = 2;
$y = 4;
$z = '2'; //String

echo"1 - VERDADEIRO / [NDA] - FALSO";
echo'<br/>';

echo $x . " <(menor que) " . $y . " : ";
echo'<br/>';
echo $x < $y;
echo'<br/>';

echo $x . " >(maior que) " . $y . " : ";
echo'<br/>';
echo $x > $y;
echo'<br/>';

echo $x . " <=(menor ou igual que) " . $y . " : ";
echo'<br/>';
echo $x <= $y;
echo'<br/>';

echo $x . " >=(maior ou igual que) " . $z . " : ";
echo'<br/>';
echo $x >= $z;
echo'<br/>';

echo $x . " ==(igual que) " . $y . " : ";
echo'<br/>';
echo $x == $y;
echo'<br/>';

echo $x . " ===(identico que) ''" . $z . "'' : ";
echo'<br/>';
echo $x === $z; //São de tipos diferentes
echo'<br/>';

?>
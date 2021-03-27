<?php

//Alguns operadores são sempre calculados antes de outros

//No php a precedência dos operadores é
//1- * / %
//2- + -
$n1 = 2 + 5 * 4; // 2 + 20
$n2 = 3 - 4 / 2; // 3 - 2 
$n3 = 1 + 3 % 2; // 1 + 1

//Se quisermos forçar uma parte da expressão a ser calculada
//primeiro usamos (). Tudo o que tiver entre parenteses será
//calculado primeiro

$media = (1 + 2 + 3) / 3; // 6 / 3 

//Operadores de mesma precedencia são calculados da esq para dir
$n4 = 1 + 2 - 3; // 3 - 3

echo $n1;
echo'<br/>';
echo $n2;
echo'<br/>';
echo $n3;
echo'<br/>';
echo $media;
echo'<br/>';
echo $n4;
echo'<br/>';

?>
<?php

//Temos os operadores de incremento ++ e decremento -- que acrescentam ou
//diminuem em 1 o valor da variavel

$i = 1;
$j = 2;

//O pre incremento é feito antes
echo ++$i; //Imprime 2
echo'<br/>';
echo --$j; //Imprime 1
echo'<br/>';

$x = 3;
$y = 4;

//O pós incremento é feito depois
echo $x++; //Imprime 3
echo'<br/>';
echo $y--; //Imprime 4
echo'<br/>';
//Exibindo novamente as variaveis o incremento/decremento foi feito
echo $x; //Imprime 4
echo'<br/>';
echo $y; //Imprime 3
echo'<br/>';

?>
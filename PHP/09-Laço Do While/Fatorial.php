<?php
    //Calculando fatorial de um numero
    $val = 5;

    echo "Calculando o fatorial de $val<br/>";
    $cont = $val;
    $fat = 1;

    do {

       $fat = $fat * $cont;
       $cont--;

    } while ($cont >= 1);

    echo "$val ! = $fat";

?>
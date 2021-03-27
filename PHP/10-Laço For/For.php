<?php

    //O for é outra estrutura de repetição dentor do php. Podemos declarar
    //a variavel contadora e fazer o incremento na declaração da própria estrutura

    for ($i = 1; $i <= 10; $i++) {//Incremento
        echo "$i ";
    }

    echo "<br/>";

    for ($i = 10; $i >= 1; $i--) {//Decremento
        echo "$i ";
    }

    echo "<br/>";

    for ($i = 0; $i <= 100; $i +=5){//Incremento 5 em 5
        echo "$i ";
    }

    echo "<br/>";

    for ($i = 20; $i >= 0; $i -= 2){//Decremento 2 em 2
        echo "$i ";
    }

?>
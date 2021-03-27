<?php

    //Temos uma matriz irregular
    $matriz = array(array(1),
                    array(2,3),
                    array(4,5,6));

    foreach ($matriz as $subMatriz) {
        foreach($subMatriz as $elemento) {

            echo "$elemento ";

        }
        echo "<br/>";
    }

?>
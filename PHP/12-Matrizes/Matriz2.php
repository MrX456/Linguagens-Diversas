<?php

    $matriz = array(array(6,4,2),
                    array(4,9,3),
                    array(3,2,4));
    //Temos tres vetores de 3 elementos cada um dentro de um vetor(matriz 3x3)

    //Para mostrar uma matriz em forma de tabela temos que aninhar
    //duas estruturas de repetição, uma para as linhas e outra
    //para as colunas

    foreach ($matriz as $subMatriz) {
        foreach($subMatriz as $elemento) {

            echo "$elemento ";

        }
        echo "<br/>";
    }

?>
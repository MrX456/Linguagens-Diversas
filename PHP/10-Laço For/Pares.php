<?php

    //Exibir todos os pares de 1 a 30 e mostrar o total

    $totPar = 0;

    for($i = 1; $i <= 30; $i++) {

        if($i % 2 == 0) {

            echo "$i <br/>";
            $totPar++;

        }

    }
    
    echo "Foram encontrados $totPar pares no intervalo de 1 a 30";

?>
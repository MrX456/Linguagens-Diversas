<?php

    //Este método mostra todos os impares de 1 ate 40
    function impares() {

        for($i = 0; $i <= 40; $i++) {

            if($i % 2 != 0) {
                echo "$i ";
            }

        }

    }

    //Toda vez que chamamos uma função seu bloco de código é executado
    impares();
    
?>
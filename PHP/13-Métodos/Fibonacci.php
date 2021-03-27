<?php

    //Este método mostra a sequancia de Fibonacci
    function fibonacci($a, $b, $limite) {

        $aux;

        for($i = 1; $i <= $limite; $i++) {

            $aux = $a + $b;
            $a = $b;
            $b = $aux;

            echo "$aux ";

        }

    }

    //Toda vez que chamamos uma função seu bloco de código é executado
    define("x", 0);
    define("y", 1);
    $limite = 11; //Total de termos na sequencia

    fibonacci(x, y, $limite);
    
?>
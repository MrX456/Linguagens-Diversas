<?php

    //Métodos podem ter n parametros, eles são valores que o método vai manipular
    //e vem de fora da estrutura

    //Recebemos dois numeros e somamos
    function soma($x, $y) {

        return $x + $y;

    }
    //Subtraindo valores
    function subtrair($x, $y) {
  
        return $x - $y;

    }
    //Apenas um parametro e elevendo ao quadrado
    function quadrado($x) {

        return pow($x, 2);//pow() é um método interno do php que requer 2 parametros

    }

    //Ao chamar um método que requer parametros, é necessario passa-los
    //no ato da chamada. A quantidade de parametros passada deve corresponder com
    //a quantidade exigida pelo metodo
    $a = 4;
    $b = 2;

    echo "$a & $b <br/>";

    echo soma($a, $b);
    echo "<br/>";

    echo subtrair($a, $b);
    echo "<br/>";

    echo quadrado($a);
    echo "<br/>"
    
?>
<?php

    //Os métodos seguintes calculam diametro, circunferencia e area de
    //um circulo de um raio qualquer

    function diametro($raio) {

        $d = $raio + $raio;
        return $d;

    }

    function circunferencia($raio, $pi) {

        $c = 2 * $pi * $raio;
        return $c;
    }

    function area($raio, $pi) {
        
        $a = $pi * pow($raio, 2);
        return $a;
    }

    define("pi", 3.14159);
    $raio = 3;
    
    echo "Circulo de raio $raio <br/>";

    echo "Diametro : " . diametro($raio);
    echo "<br/>";

    echo "Circunferencia : " . circunferencia($raio, pi);
    echo "<br/>";

    echo "Area : " . area($raio, pi);
    echo "<br/>";
    
?>
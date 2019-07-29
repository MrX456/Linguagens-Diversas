<?php
    //Embora o php possa reconhecer um tipo de dado automaticamente, podemos forçar
    //uma conversão para outro tipo(contanto que a conversão seja possivel)
    //Para isso usamos o typecast
    //inteiros(letras não podem ser convertidas)
    $a = (int) "5";
    $b = (integer) "8";
    //reais
    $c = (real) "2.333"; 
    $d = (float) "5.24";
    $e = (double) "10.34";
    //strings
    $f = (string) 6; 
    //booleano
    $g = (bool) 1;

    echo $a;
    echo gettype($a); //gettype retorna o tipo da variavel
    echo'<br/>';

    echo $b;
    echo gettype($b); 
    echo'<br/>';

    echo $c;
    echo gettype($c); 
    echo'<br/>';

    echo $d;
    echo gettype($d); 
    echo'<br/>';

    echo $e;
    echo gettype($e); 
    echo'<br/>';

    echo $f;
    echo gettype($f); 
    echo'<br/>';

    echo $g;
    echo gettype($g); 
    echo'<br/>';
    
?>
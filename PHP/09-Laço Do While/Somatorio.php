<?php
    
    //Imprimir somatorio de 1 ate 100

    $contador = 1;
    $limite = 100;
    $soma = 0;

    echo "Somatorio de 1 ate 100 : " . "<br/>";
    
    do {

        $soma += $contador;
        $contador++;
        
    } while ($contador <= $limite);

    echo $soma;

?>
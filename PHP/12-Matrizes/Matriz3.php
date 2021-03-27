<?php

    //Matrizes podem ser de quaquer tipo
    $nomes = array(array("\"Maria\"", "\"Lucia\"", "\"Gabriela\""),
                    array("\"Jennifer\"", "\"Amanda\"", "\"Juliana\""));

    foreach ($nomes as $subnomes) {
        foreach($subnomes as $elemento) {

            echo "$elemento ";

        }
        echo "<br/>";
    }

    $table = array(array(true, false),
                   array(false, true));

    foreach ($table as $subTable) {
        foreach($subTable as $elemento) {
            
            if(!$elemento) {
                echo "0 ";
            }
            else {
                echo "$elemento ";
            }
       
        }
        echo "<br/>";
    }

?>
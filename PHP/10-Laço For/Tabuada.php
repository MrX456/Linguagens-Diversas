<?php
   
   //Tabuada de 1 até 10
   $fator;
   $multiplicador;

   //Podemos aninhar uma estrutura de repetição dentro da outra.

   for($fator = 1; $fator <= 10; $fator ++) {

        for($multiplicador = 1; $multiplicador <= 10; $multiplicador++) {

            echo $fator . " x " . $multiplicador . " = ";
            echo "<br/>";
            echo $fator * $multiplicador;
            echo "<br/>";

        }

        //retornando o multiplicador para 1
        $multiplicador = 1;
        echo "-----------------------------------" . "<br/>";

   }

?>
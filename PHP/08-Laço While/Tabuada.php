<?php
   
   //Tabuada de 1 até 10
   $fator = 1;
   $multiplicador = 1;

   //Podemos aninhar uma estrutura de repetição dentro da outra. Uma incrementa o fator
   //e a outra o multiplicador e faz o calculo

   while($fator <= 10) {

        while($multiplicador <= 10) {

            echo $fator . " x " . $multiplicador . " = ";
            echo "<br/>";
            echo $fator * $multiplicador;
            echo "<br/>";
            $multiplicador++;

        }
        //proximo fator
        $fator++;
        //retornando o multiplicador para 1
        $multiplicador = 1;
        echo "-----------------------------------" . "<br/>";

   }

?>
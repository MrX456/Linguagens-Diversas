<?php
   
   //O comando break encerra o laço imediatamente
   $contador = 0;

   while($contador <= 10) {

        //Quando o contador valer 4 o laço será quebrado
        if($contador == 4) {

            echo $contador;
            break;
            
        }
        //Será ignorado se break for excecutado
        echo $contador . "<br/>";
        $contador++;

   }

   echo "<br/>" . "Laco quebrado em " . $contador;
 
?>
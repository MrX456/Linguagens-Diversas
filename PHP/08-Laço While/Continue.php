<?php
   
   //O comando continue volta imediatamente para o inicio da estrutura de repetição
   $contador = 0;

   while($contador <= 10) {

        //Quando o contador valer 4 o laço voltará ao inicio
        if($contador == 4) {
            
            $contador++;
            continue;
            
        }
        //O valor 4 não será impresso por causa do continue
        echo $contador . "<br/>";
        $contador++;

   }

   echo "<br/>" . "Valor 4 foi pulado";
 
?>
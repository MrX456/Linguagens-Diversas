<?php
   
   //O while é uma estrutura de repetição que vai repetir um bloco de código
   //enquanto a condição testada for verdadeira
   $contador = 0;

   while($contador <= 10) {

        echo $contador . "<br/>";
        $contador++;
        //É muito importante mudar o valor do contador ou teremos uma repetição
        //que nunca vai terminar de ser executada(Loop infinito)

   }
 
?>
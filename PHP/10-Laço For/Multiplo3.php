<?php
   
   //Multiplos de 3 ate 100
   $totMulti = 0;
   
   echo "Os multiplos de 3 de 1 ate 100 sao: " . "<br/>";

   for($i = 1; $i <= 100; $i++) {

        if($i % 3 == 0) {

            echo "$i ";
            $totMulti++;

        }
   }

   echo "<br/> Total de multiplos : $totMulti";
 
?>
<?php
   
   //Podemos testar multiplas condições aninhando estruturas if elseif

   $nota1 = 5;
   $nota2 = 3;
   $nota3 = 1;
   $media = ($nota1 + $nota2 + $nota3) / 3;

   //Apenas 1 destes blocos será executado
   if($media >= 6) {

       echo "Aluno Aprovado com media $media";

   }
   elseif($media < 6 && $media > 3) {

        echo "Aluno em Recuperacao com media $media";

   }
   else {

        echo "Aluno Reprovado com media $media";

   }

?>
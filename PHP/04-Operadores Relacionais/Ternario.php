<?php
   
   //O operador ternário permite testar uma condição.

   $nota1 = 9;
   $nota2 = 8;
   $nota3 = 7;
   $media = ($nota1 + $nota2 + $nota3) / 3;

   echo "Com media = $media" . "<br/> ";
   echo "O aluno foi " . (($media < 6) ? "REPROVADO" : "APROVADO");

   //Se a media for menor que 6(verdadeiro) imprime REPROVADO
   //se for maior(falso) imprime APROVADO

   echo "<br/>";

   $nota1 = 6;
   $nota2 = 4;
   $nota3 = 2;
   $media = ($nota1 + $nota2 + $nota3) / 3;

   echo "Com media = $media" . "<br/> ";
   echo "O aluno foi " . (($media < 6) ? "REPROVADO" : "APROVADO");

?>
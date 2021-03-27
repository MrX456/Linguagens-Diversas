<?php
   
   //O switch case é outro condicional em php. Ele permite testar multiplas condições
   $numero = 5;
   $operacao = "multiplicacao";

   //Vamos testar a variavel operacao
   switch ($operacao) {

       case "soma":
              echo "$numero + 3 = ";
              echo "<br/>";
              echo $numero + 3;
              break;

        case "subtracao":
              echo "$numero - 4 = ";
              echo "<br/>";
              echo $numero - 4;
              break;

        case "multiplicacao":
                echo "$numero x 5 = ";
                echo "<br/>";
                echo $numero * 5;
                break;

        case "divisao":
                echo "$numero / 2 = ";
                echo "<br/>";
                echo $numero / 2;
                break;

        default :
                echo "Nenhuma operacao executada";
                break;

   }

   //O uso do break é importante porque depois que um case for executado o programa sai
   //da estrutura ignorando os outros abaixo dele, sem o brake eles também seriam  executados

   //O bloco default será executado apenas se nenhum dos demais for
?>
<?php

//Temos algumas funções matematicas especiais em php

$v1 = 2;
$v2 = 3;
$v3 = 3.12;
echo"<h2>Valores recebidos $v1 e $v2</h2>";
echo"O valor absouto de $v2 e " .abs($v2); //valor asoluto
echo"<br/>O valor de $v1<sup>$v2</sup> e " .pow($v1,$v2);//potenciação
echo"<br/>A raiz quadrada de $v1 e " .sqrt($v1); //Raiz quadrada
echo"<br/> Arrendondando $v3 temos " .round($v3);//arrendondamento de um real
echo"<br/> Arrendondando $v3 para baixo temos " .floor($v3);//arrendondamento para baixo
echo"<br/> Arrendondando $v3 para cima temos " .ceil($v3);//arrendondamento para cima
echo"<br/> A parte inteira de $v3 e " .intval($v3);//Mostra a parte inteira de um valor
echo"</br> A primeira casa decimal de $v3 e " .number_format($v3,1);//Mostra numero ate casa decimal especificada
echo"</br> Sepadador decimal $v3 e " .number_format($v3,1,",",".");//Utiliza virgula como separador

?>
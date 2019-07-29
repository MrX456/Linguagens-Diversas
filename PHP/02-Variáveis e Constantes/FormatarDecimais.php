<?php
    //Valores decimais em php podem ser formatados da seguinte forma:
    $k = 2.34567;
    $l = 21.12345;

    //numberformat($variavel, qtde de casas desejadas). Isto arrendondará o valor da variavel
    echo number_format($k, 2); //2 casas
    echo'<br/>';
    echo number_format($l, 4); //4 casas
    echo'<br/>';

    //Também podemos mudar o padrão de notação
    echo number_format($k, 1, ",", "."); //ponto será substituido por virgula
    echo'<br/>';
    echo number_format($l, 3, ",", ".");
    echo'<br/>';
?>
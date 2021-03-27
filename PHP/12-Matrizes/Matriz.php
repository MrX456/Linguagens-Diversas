<?php

    //Para representar matrizes em php temos que usar vetores dentro de outros
    $matriz = array(array(6,4),
                    array(4,9),
                    array(3,2));
    //Temos tres vetores de 2 elementos cada um dentro de um vetor(matriz 3x2)
    
    //Vai mostar todos elementos com seus respectivos indices
    print_r($matriz);

    echo "<br/>";

    //Para acessar um elemento especifico de uma matriz usamos
    //matriz[linha][coluna]. Lembrando que começa em 0
    echo "Elemento linha 0 coluna 1 : " . $matriz[0][1];

        

?>
<?php

    // O range() permite criar um vetor dentro de um intervalo especificado

    //Aqui vai criar um vetor com os elementos 5,6,7...20(intervalo entre 5 e 20)
    $vec = range(5,20);

    echo "O vetor tem " .count($vec) ." elementos <br/>";

    print_r ($vec);

?>
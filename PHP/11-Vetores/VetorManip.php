<?php

    //Podemos manipular vetores atrvés de alguns métodos

    $vec = array(3,5,8,2);
    
    //count exibe quanto elementos o vetor possui
    echo "O vetor tem " . count($vec) ." elementos <br/>";

    //print_r exibe o vetor completo bem como cada posição(começa em 0)
    print_r($vec);

    echo "<br/>";

    //Adiciona o numero 7 na utlima posição do vetor
    $vec[] = 7;
    echo "O vetor tem " .count($vec) ." elementos <br/>";
    print_r($vec);

    echo "<br/>";

    //Remove o elemento do indice especificado
    unset($vec[0]); //remove elemento da posição 0
    echo "O vetor tem " .count($vec) ." elementos <br/>";
    print_r($vec);

    echo "<br/>";

    //Podemos ordenar um vetor com o método sort
    sort($vec);
    foreach($vec as $valor) {

        echo "$valor ";

    }
    
    echo "<br/><br/>";

    //Podemos definir manualmente qual o indice de um elemento de um vetor
    $vet = array (3 => 5,
                  1 => 9,
                  0 => 8,
                  7 => 7);

    print_r($vet);   
        
?>
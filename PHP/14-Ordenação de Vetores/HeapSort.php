<?php

    //Vetores devem ser passados por referencia
    function heapSort(&$vetor) {
        buildMaxHeap($vetor);
        $n = sizeof($vetor);

        for($i = sizeof($vetor) - 1; $i > 0; $i--) {
            swap($vetor, $i, 0);
            maxHeapify($vetor, 0, --$n);
        }

        return $vetor;
    }

    //Funções adicionais
    function buildMaxHeap(&$v) {
        for($i = sizeof($v) / 2 - 1; $i >= 0; $i--) {
            maxHeapify($v, $i, sizeof($v));
        }
    }

    function maxHeapify(&$v, $pos, $n) {
        $max = 2 * $pos + 1;
        $right = $max + 1;

        if($max < $n) {
            if($right < $n && $v[$max] < $v[$right]) {
                $max = $right;
            }
            if($v[$max] > $v[$pos]) {
                swap($v, $max, $pos);
                maxHeapify($v, $max, $n);
            }
        }
    }

    function swap(&$v, $j, $aposJ) {
        $aux = $v[$j];
        $v[$j] = $v[$aposJ];
        $v[$aposJ] = $aux;
    }

    //Vetor fora de ordem
    $num = array(4, 2, 8, 1, 3, 5);

    //Exibir vetor
    echo "Vetor original <br>";
    foreach($num as $valor) {
        echo "$valor ";
    }

    //Vetor ordenado
    heapSort($num);

    echo "<br> Pos Heap Sort <br>";
    foreach($num as $valor) {
        echo "$valor ";
    }

?>
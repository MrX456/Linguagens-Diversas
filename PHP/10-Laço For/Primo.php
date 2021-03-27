<?php

    //Verificar se um número é primo

    $n = 7;

    echo "Analisando o numero $n";
    echo "<br/> Valores Multiplos:";

    $multi = 0;

    for ($i = 1; $i <= $n; $i++) {

        if ($n % $i == 0) {

            $multi++;
            echo "$i ";

        }

    }

    echo "Total de multiplos de $n = $multi<br/>";

    if ($multi <= 2) {
        echo "$n e primo";
    }
    else {
        echo "$n nao e primo";
    }

?>
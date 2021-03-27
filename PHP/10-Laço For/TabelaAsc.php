<?php

    //Permite a exibição de caracteres especiais
    header("Content-type: text/html; charset=utf-8");

    echo "Tabela ASCII - Alguns elementos podem não ser exibidos corretamente <br/>";
    
    //Mostrar letra correspondente a codigo na tabela ASCII
    for($codigo = 0; $codigo <= 255; $codigo ++) {

        echo chr($codigo);
        echo "<br/>";

    }

?>
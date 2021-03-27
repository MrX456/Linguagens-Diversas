<?php
    
    //No laço do/while o teste da condição de repetição só e feito no final
    //isto garante a execução do bloco pelo menos 1 vez independente do
    //resultado do teste

    $contador = 0;
    
    do {

        echo $contador . "<br/>";
        $contador++;
        
    } while ($contador <= 10);

?>
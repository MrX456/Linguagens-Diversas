<?php

    //Cadeia de caracter
    $nome = "Real Madrid Club Futbol";

    //O php possui diversos métodos para manipular strings

    //wordwrap(string, qtde de caracteres,boolean) quebra string em varias linhas.
    //Boolean- false indica se uma palavra tiver mais caracteres que o especificado
    //ela não sera quebrada
    echo wordwrap($nome, 8, "<br/>", false);
    echo "<br/>";

    //strlen() mostra o tamanho da string
    $tam = strlen("$nome");
    echo "O tamanho da string e $tam";
    echo "<br/>";

    //trim() remove os espaços antes e depois da string
    $pal = "      Amanda    ";
    echo trim($pal);
    echo "<br/>";

    //ltrim() remove apenas os espaços antes da string
    ltrim($pal);
    
    //rtrim() remove apenas os espaços depois da string
    rtrim($pal);
    
    //str_word_count() conta as palavras
    echo str_word_count($nome);
    echo "<br/>";

    //explode() quebra a string transformando em vetor
    $vec = explode(" ", $nome);
    print_r($vec);
    echo "<br/>";

    //str_split() igual explode mas separa por letra e considera espaços
    $vet = str_split($pal);
    print_r($vet);
    echo "<br/>";

    //implode() contraria ao explode(). # foi usado como separador
    $imp = implode("#", $vec);
    echo $imp;
    echo "<br/>";

    //chr() mostra o caracter correspondente ao numero
    echo "caracter numero 41 " . chr(41);
    echo "<br/>";

    //ord() inverso a chr()
    echo "numero correspondente a ) " . ord(')');
    echo "<br/>";

    //strtolower() deixa toda string em minusculo
    echo strtolower($nome);
    echo "<br/>";

    //strtoupper() deixa toda string em maisculo
    echo strtoupper($nome);
    echo "<br/>";

    //ucfirst() apenas primeira letra maiuscula
    $r = "aprendendo php";
    echo ucfirst($r);
    echo "<br/>";

    //ucwords() capitaliza string
    echo ucwords($r);
    echo "<br/>";

    //strrev() inverte toda a string
    echo strrev($r);
    echo "<br/>";

    //strpos() mostra a partir de qual posição esta o parametro
    echo strpos($r, "php"); //php esta a partir da posição 11
    echo "<br/>";

    //stripos() mesmo funcionamento de strpos() mas ignora caixas altas ou baixas
    echo stripos($r, "PHP");
    echo "<br/>";

    //substr_count() mostra quantas vezes o parametro foi encontrado na string
    echo substr_count($r, "p"); //contem 3 letras p
    echo "<br/>";
    
    //substr() corta a string a a partir do intervalo especificado
    echo substr($r, 0, 5);
    echo "<br/>";

    //str_pad() adiciona um caracter na qtde especificada a uma string
    $s = "programando";
    echo str_pad($s, 20, "#", STR_PAD_RIGHT); //Adiciona 20 # a string(a direita)
    echo "<br/>";
    echo str_pad($s, 20, "#", STR_PAD_LEFT); //Adiciona 20 # a string(a esquerda)
    echo "<br/>";
    echo str_pad($s, 20, "#", STR_PAD_BOTH); //Adiciona 20 # a string(ambos lados)
    echo "<br/>";

    //str_repeat() repete uma string o numero de vezes especificado
    $t = "php";
    echo str_repeat($t, 20);
    echo "<br/>";

    //str_replace() substitui o elemento indicado por outro especificado
    $u = "O item custou R$4.50";
    echo str_replace(".", ",", $u); //substitui . por ,
    echo "<br/>";

?>
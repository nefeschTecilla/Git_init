#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h> // Utiliar esta biblioteca todas as vezes que eu quiser usar dado lógico


// Função Principal do programa
int main ()
{


    //setlocale(LC_ALL, "Portuguese_Brasil");
    setlocale(LC_ALL, "");


    // Definindo variáveis
    bool a = true, b = false;


    /*
    IMPORTANTE: Se atentar a regra de que o programa só entra/executa um bloco de "if", quando determinada condicional é VERDADEIRA!
    Tecnicamente, lá dentro do computador sempre que eu tenho uma condição ele resulta para mim "0" ou "1", "sim" ou "não", "verdadeiro" ou "falso", quando ele é verdadeiro ele sempre entra, quando é falso ele vai pro próximo bloco ou então ele fecha o códiigo se não encontrar nenhuma verdade.
    */


    // Se "a" for verdadeiro
    // Nesse caso, "a" é verdadeiro, pois na declaração da minha variável eu disse que ele é "== true".
    if(a)
    {
        printf("\n'a' é verdadeiro!");
    }


    // Comparando o "b"
    if(b)
    {
        printf("\n'b' é verdadeiro!");
    }
    else
    {
        printf("\n'b é falso!'");
    }


    // Comparando uma falsidade
    if(!b)
    {
        printf("\n'b' é falso!");
    }

    printf("\n\n");

    // Pausando o programa após ele rodar
    system ("pause");
}

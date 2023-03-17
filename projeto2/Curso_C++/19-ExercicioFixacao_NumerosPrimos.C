/*
Crie um algoritmo que informe se os valores lidos são Primos ou não.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>


// Funcão Principal do programa
int main ()
{

    // Utilização de acentos
    setlocale(LC_ALL, " ");


    // Definindo variáveis
    int contadora, valor, aux = 0;


    printf("Forneça um valor para verificarmos se este número é Primo ou não: ");
    scanf("%d", &valor);


    printf("\n\n");


    for (contadora = 1; contadora <= valor; contadora++)
    {
        //  Conferindo quantas vezes houve divisibilidade
        if(valor % contadora == 0)
        {
            aux++;
        }

        // Exibe o resto da divisão na tela
        printf("%d / %d tem resto = %d \n", valor, contadora, valor%contadora);
    }


    printf("\n\n");


    if (aux == 2)
    {
        printf("O número é Primo!");
    }
    else
    {
        printf("O número NÃO é Primo, pois ele tem %d divisores!", aux);
    }

    printf("\n\n");
}


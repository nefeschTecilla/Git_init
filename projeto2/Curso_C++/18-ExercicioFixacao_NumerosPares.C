/*
Crie um algoritmo que imprima os números pares de 10 a 20 usando While, Do_While ou For.
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>


// Função Principal do programa
int main ()
{

    // Inserir acentuação
    setlocale(LC_ALL, "");


    // Definindo variáveis
    int contadora;
    int pontoInicial = 10;


    // Imprimindo os números Pares utilizando While
    while(pontoInicial <= 20)
    {
        printf("%d\n", pontoInicial);
        pontoInicial = pontoInicial + 2;
    }


    printf("\n\n");


    // Imprimindo os números Pares utilizando Do_While
    do
    {
        pontoInicial = pontoInicial - 2;
        printf("%d\n", pontoInicial);
    }
    while(pontoInicial > 10);
    // Uma coisa muito importante sobre o Do_While é que quando a condição NÃO for atendida ele não continua a repetição!


    printf("\n\n");


    // Imprimindo os números Pares utilizando For
    for(contadora = 10; contadora <= 20; contadora++)
    {
        if(contadora%2 == 0)
        {
            printf("%d\n", contadora);
        }
    }


    printf("\n\n");


    // Pausa o programa Após executar
    system("pause");
}

/*
O que são números Pares?
R: São números que quando divididos por 2, tem o Resto igual a 0!
*/

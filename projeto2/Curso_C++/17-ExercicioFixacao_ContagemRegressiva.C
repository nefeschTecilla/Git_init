
/*
Crie um algoritmo que imprima os números de 10 a 0 de forma regressiva.
Utileze While, Do While e For!
*/


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>


// Função Principal do programa
int main()
{
    // Para inserir acentos
    setlocale(LC_ALL, "");


    // Definindo variáveis
    int contadora = 10;


    // Contagem regressiva com While
    while(contadora >= 0)
    {
        printf("%d\n", contadora);
        contadora--;
    }


    printf("\n\n");


    // Contagem regressiva com DoWhile
    contadora = 10;

    do
    {
        printf("%d\n", contadora);
        contadora--;

    }
    while(contadora >= 0);


    printf("\n\n");


    // Contagem regressiva com For
    for(contadora = 10; contadora >= 0; contadora--)
    {
        printf("%d\n", contadora);
    }


    printf("\n\n");


    // Pausa o programa Após executar
    system("pause");
}

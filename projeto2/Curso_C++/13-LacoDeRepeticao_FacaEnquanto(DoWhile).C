#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>


// Funcão Principal do programa
int main()
{

    setlocale(LC_ALL, "");


    // Definindo variáveis
    int a = 1;


    // Primeiro confere a condição, depois repete o bloco
    while(a <= 10)
    {
        // Imprimindo 'a' na tela
        printf("\n%d", a);

        // Incremento
        a++;
    }


    printf("\n\n");


    // Alterando o valor de 'a'
    a = 6;


    // Executa uma vez primeiro, depois confere a condição
    do
    {
        // Imprimindo 'a' na tela
        printf("\n%d", a);

        // Incremento
        a++;
    }
    while(a <=10);


    printf("\n\n");


    // Pausa o programa Após executar
    system("pause");
}

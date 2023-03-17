#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>


// Função Principal do programa
int main()
{

    // Para inserir acentuação
    setlocale(LC_ALL, "");


    // Definindo variáveis
    int contadora;


    // Tabuada do 5
    for(contadora = 1; contadora <= 10; contadora++)
    {
        printf("\n%d X 5 = %d", contadora, contadora*5);
    }


    printf("\n\n");


    // Contando de 2 em 2
    for(contadora = 0; contadora <= 10; contadora += 2)
    {
        printf("\n%d", contadora);
    }


    printf("\n\n");


    // Contagem regressiva
    for(contadora = 10; contadora > 0; contadora--)
    {
        printf("\n%d", contadora);
    }


    printf("\n\n");


    // Pausa o programa Após executar
    system("pause");
}

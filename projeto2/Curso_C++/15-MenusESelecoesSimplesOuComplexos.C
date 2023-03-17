#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>


// Função Principal do programa
int main()
{
    // Para inserir acentos
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Definindo variáveis
    int opcao;

    // Confere e valida opção
    while(opcao < 1 || opcao > 3)
    {
        // Interface do Menu
        printf("Escolha uma opção:");
        printf("\n1 - Opção 1");
        printf("\n2 - Opção 2");
        printf("\n3 - Opção 3");

        printf("\n\n");

        // Lendo a opção
        scanf("%d", &opcao);

        // Resultado de acordo com a opcao escolhida
        switch(opcao)
        {
        case 1:
            printf("\nA opção escolhida foi a '1'!");
            break;
        case 2:
            printf("\nA opção escolhida foi a '2'!");
            break;
        case 3:
            printf("\nA opção escolhida foi a '3'!");
            break;
        default:
            printf("\nOpção inválida! Por favor forneça um valor de 1 a 3.");
            printf("\n\n");
            break;
        }
    }

    printf("\n\n");

    // Pausa o programa Após executar
    system("pause");
}

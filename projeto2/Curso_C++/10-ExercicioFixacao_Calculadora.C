#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


/*
Crie um algoritmo que leia dois valores e depois crie um menu (usando Switch|Case) de 4 opções:
1 - Somar;
2 - Subtrair;
3 - Dividir;
4 - Multiplicar.

Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida com os dois valores lidos.
*/


// Funcão Principal do programa
int main()
{

    setlocale(LC_ALL, "");


    // Definindo variáveis
    float valor1, valor2;
    int operacao;


    // Solicitando dois valores
    printf("\nDigite dois valores a seguir...\n\n");
    printf("Primeiro valor: ");
    scanf("%f", &valor1);
    printf("Segundo valor: ");
    scanf("%f", &valor2);


    // Escolhendo a operação
    printf("\nO que você deseja fazer com esses dois valores:");
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
    printf("\n3 - Dividir");
    printf("\n4 - Multiplicar\n\n");
    scanf("%d", &operacao);


    printf("\n\n");


    switch(operacao)
    {
    case 1:
        printf("\nA Soma de %.2f e %.2f é %.2f!\n\n", valor1, valor2, (valor1+valor2));
        break;
    case 2:
        printf("\nA Subtração de %.2f e %.2f é %.2f!\n\n", valor1, valor2, (valor1-valor2));
        break;
    case 3:
        printf("\nA Divisão de %.2f e %.2f é %.2f!\n\n", valor1, valor2, (valor1/valor2));
        break;
    case 4:
        printf("\nA Multiplicação de %.2f e %.2f é %.2f!\n\n", valor1, valor2, (valor1*valor2));
        break;
    default:
        printf("\nOpção inválida!\n\n");
        break;
    }


    printf("\n\n");


    // Pausa o programa Após executar
    system("pause");
}

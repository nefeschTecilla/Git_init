#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

// Função Principal do programa
int main()
{

    // Inserir acentos
    setlocale(LC_ALL, " ");


    /*
    Crie um algoritmo que leia 3 valores e informe se eles são iguais entre si para formarem os lados de um triângulo equilátero.
    */


    // Definindo variáveis
    int ladoA, ladoB, ladoC;


    // Coletando valores
    printf("Digite 3 valores: \n");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);


    // Analisa se é Equilátero
    if((ladoA == ladoB) && (ladoB == ladoC))
    {
        printf("\nO triângulo é Equilátero!");
    }
    else
    {
        // Analisa se existem pelo menos 2 lados iguais
        if((ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA))
        {
            printf("\nO triângulo é Isósceles!");
        }
        else
        {
            printf("\nO triângulo é Escaleno!");
        }
    }


    printf("\n\n");


    // Pausa o programa após executar
    system("pause");
}

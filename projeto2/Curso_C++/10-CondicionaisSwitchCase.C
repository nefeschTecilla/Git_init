#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


// Função Principal do programa
int main()
{

    // Inserir acentuação
    setlocale(LC_ALL, "");


    // Definindo variáveis
    int a = 2;
    char b = 'x';


    // Código de exemplo com estrutura If
    if(a == 1)
    {
        printf("\nOpção escolhida: 1!");
    }
    else if(a == 2)
    {
        printf("\nOpção escolhida: 2!");
    }
    else if(a == 3)
    {
        printf("Opção escolhida: 3!");
    }
    else
    {
        printf("\nOpção inválida!");
    }


    // O mesmo código de cima, porém adaptado com estrutura Switch/Case
    switch(a)
    {
    case 1:
        printf("\nOpção escolhida: 1!");
        break;
    case 2:
        printf("\nOpção escolhida: 2!");
        break;
    case 3:
        printf("Opção escolhida: 3!");
        break;
    default:
        printf("\nOpção inválida!");
        break;
    }


    // Switch com Char
    switch(b)
    {
    case 'x':
        printf("\nA letra escolhida é: 'x'!");
        break;
    default:
        printf("\nOpção inválida!");
        break;
    }


    printf("\n\n");


    // Pausa o programa Após o mesmo ser executado
    system("pause");
}


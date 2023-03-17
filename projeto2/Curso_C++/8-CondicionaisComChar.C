#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>


// Função Principal do programa
int main()
{

    //setlocale(LC_ALL, "Portuguese_Brasil");
   // setlocale(LC_ALL, "");


    /*
    Cada letra, cada número, todos os símbolos possuem um código númerico que o representa na Tabela ASCII (www.ascii.cl)!
    */


    // Definindo variáveis
    char letra = 'x';


    // Condicional Simples
    if(letra == 'x')
    {
        printf("\nA variável Letra é igual a 'x'!");
    }


    // Código em ASCII
    printf("\nO código da variável Letra (x) na Tabela ASCII é = %d", letra);


    //  Comparando Códico ASCII
    if(letra == 120)
    {
        printf("\nA letra correspondente ao códico 120 é 'x'!");
    }


    printf("\n\n");


    // Pausa o programa após executar
    system("pause");
}

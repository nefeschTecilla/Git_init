#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


//Função Principal do programa
int main()
{

    //setlocale(LC_ALL, "Portuguese_Brasil");
    setlocale(LC_ALL, "");


    // Definindo variáveis
    int    a =  5, b = 10, c = 15;
    char d = 'x';


    // Maior
    if(a > 2)
    {
        printf("\n %d é maior que 2!", a);
    }


    // Maior ou Igual
    if(c >= b)
    {
        printf("\n %d é maior ou igual a %d!", c, b);
    }


    // Menor
    if(a < 10)
    {
        printf("\n %d é menor que 10!");
    }


    // Menor ou Igual
    if(a <= 10)
    {
        printf("\n %d é menor ou igual a 10!", a);
    }


    // Diferente
    if(c != 10)
    {
        printf("\n %d não é 10!", c);
    }
    if(d != 'a')
    {
        printf("\n %c não é a!", d);
    }


    printf("\n");


    // Pausa o programa após executar
    system("pause");
}

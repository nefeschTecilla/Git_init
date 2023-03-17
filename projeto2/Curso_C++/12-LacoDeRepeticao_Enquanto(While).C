#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>


// Função Principal do programa
int main()
{

    setlocale(LC_ALL, "");


    // Definindo variáveis
    int a = 1, b = 10;


    // Contando até 10
    while(a <=10)
    {
        // Imprimindo 'a' na tela
        printf("\n%d", a);

        // Incremento
        a++;
        // 'a++;' é igual a 'a = a + 1;'
    }


    printf("\n\n");


    // Contagem regressiva
    while(b >= 1)
    {
        // Imprimindo 'b' na tela
        printf("\n%d", b);

        // Incremento
        b--;
        // 'b--;' é igual a 'b = b - 1;'
    }


    printf("\n\n");


    // Pausa o programa Após executar
    system("pause");
}

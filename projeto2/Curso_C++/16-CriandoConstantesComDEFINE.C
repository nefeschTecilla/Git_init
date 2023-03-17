#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>
#define TAM 10

// Função Principal do programa
int main ()
{

    // Para inserir acentuação
    setlocale(LC_ALL, "");


    // Imprime na tela
    printf("%d", TAM);


    printf("\n\n");


    // Definindo mais uma variável
    int contadora;


    for(contadora = 1; contadora <= TAM; contadora++)
    {
        printf("%d\n", contadora);
    }


    printf("\n\n");


    // Pausa o programa após executar
    system("pause");
}


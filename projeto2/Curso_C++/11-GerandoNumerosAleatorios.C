#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>


// Função Principal do programa
int main ()
{

    // Para inserir acentos
    setlocale(LC_ALL, "");


    // Responsável por Alimentar o "rand"  de forma diferente
    srand((unsigned) time(NULL));
    /* O "srand" é a função randamica responsagem por gerar o meu número; ela recebe como parâmetro o "unsigned", que é pra forçar o programa a me dar números POSITIVOS.
    E o "time" é para que o programa pegue o número aleatório do computador naquele exato momento, para ele pegar lá da minha memória o que está rodando
    exatamente no presente..
    */


    // Variável que recebe o resto da divisão do número por 3 (aleatório de 0 a 2)
    int aleatorio1 = rand() % 3;


    // Variável que recebe o resto da divisão do número por 5 (aleatorio de 1 a 5)
    int aleatorio2 = (rand() % 5) + 1;


    // Imprimime o valor
    printf("%d", aleatorio2);


    printf("\n\n");


    // Pausa o programa Após a sua execução
    system("pause");
}

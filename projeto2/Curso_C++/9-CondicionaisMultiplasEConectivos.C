
// Quando eu tenho o conectivo lógico "and (&&)", TUDO tem que ser verdadeiro, se não ele não vai entrar no meu bloco de if/condicionais!
// Diferentemente do conectivo lógico "or" onde, se pelo menos uma das condicionais for atendida, ele já entra no bloco de instruções!
// Sobre o conectivo OR, ele é representado pelos símbolos '"||" (duas barras retas que tecnicamente são chamadas de pipe).

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>


// Função Principal do programa
int main()
{

    setlocale(LC_ALL, "");


    // Definindo variáveis
    int a = 18;


    // Conectivo lógico E (AND)
    if(a > 5 && a > 15)
    {
        printf("\nA variável 'a' está entre 5 e 15!");
    }


    // Conectivo lógico OU (OR)
    if(a > 5 || a > 15)
    {
        printf("\nA variável 'a' é maior do que 5, ou do que 15!");
    }


    // Misturando conectivos
    if((a > 5 && a > 15) || (a == 20))
    {
        printf("\nA variável 'a' está entre 5 e 15, ou ela vale 20!");
    }


    printf("\n\n");


    // Pausa o programa depois de executar
    system("pause");
}

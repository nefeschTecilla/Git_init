
/*
Crie um algoritmo que leia 3 notas e calcule a média entre elas. Se o valor for maior que 7 informe que o aluno doi aprovado, senão, que foi reprovado.
*/


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main()
{

    setlocale(LC_ALL, "");

    float nota1, nota2, nota3, media;


    printf("\nInforme a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nInforme a segunda nota: ");
    scanf("%f", &nota2);

    printf("\nInforme a terceira nota: ");
    scanf("%f", &nota3);


    media = ((nota1+nota2+nota3)/3);
    // Inserindo casas decimais
    printf("\nA média do aluno é '%.2f'!", media);


    printf("\n\n");


    if(media > 7)
    {
        printf("\nAluno Aprovado!");
    }
    else
    {
        printf("\nAluno Reprovado!");
    }


    printf("\n\n");


    system("pause");
}

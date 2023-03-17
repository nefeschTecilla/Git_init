#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Função Principal do programa
int main()
{
    setlocale(LC_ALL,"");

    // Definindo variáveis
    int    a = 1, opcao = 2;
    float b = 2.5;
    char c = 'x';


    // Condicional Simples
    if(a == 5)
    {
        printf("\n A variável a = 5!");
    }
    if(b == 2.5)
    {
        printf("\n A variável b = 2.5!");
    }
    if(c == 'x')
    {
        printf("\n A variável c = letra x!");
    }


    // Número Ímpar ou Par
    if(a%2 == 1)
    {
        printf("\n A variável a é Ímpar!");
    }
    else
    {
        printf("\n A variável a é Par!");
    }


    // Condicional Composta
    if(opcao == 1)
    {
        printf("\n Opção = 1!");
    }
    else if(opcao == 2)
    {
        printf("\n Opção = 2!");
    }
    else
    {
        printf("\n Opção não é igual a 1 e nem 2!");
    }


    printf("\n");


    // Pausa o programa após executar
    system("pause");


    /*
     Variável do tipo Char (letras únicas):

     char d = 'y';
     printf("O valor da variável d é Texto, d = %c \n\n", 'y');
     fflush(stdin);
     scanf("%c", &d);
     printf("\nO valor de d mudou para %c \n\n", d);

     IMPORTANTE - Sobre o comando fflush(stdin), ele significa limpeza de Buffer, ou seja, limpeza de arquivos temporários alocados na memória.
     No C, quando nós lemos um valor, antes dele ir para a variável, ele passa por um lugarzinho chamado Buffer, que é um espaço de memória temporário.
     Ele vem primeiro para o Buffer, e depois ele vai lá para a minha variável... Então pode acontecer, em momentos que nós já utilizamos o Buffer anteriormente,
     de ele conter lixo. Logo, antes de eu ler um valor para Char é sempre bom que eu limpe o Buffer com a Função fflush.
    */
}

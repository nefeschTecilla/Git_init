#include <stdio.h> //Biblioteca de ler e de exibir, de entrada e de saída |input e output| de valores em tela - tipo periféricos de hardware.
#include <stdlib.h> //Biblioteca para realização de operações matematicas, alocação de espaço na memória e conversão de valores aleatórios.
#include <locale.h> //Biblioteca para inserção de acentos e caracteres especiais.

int main()  //
{
    setlocale(LC_ALL,"");//Este comando deve ser utilizado, obrigatoriamente, dentro da minha função, quando utilizo a biblioteca "locale.h".
    printf("Olá \n"); //"printf" = escreva em tela tal coisa.

    //Lendo números inteiros
    int a = 5; //Passei o valor de a.
    int b = 5; //Passei o valor de b.
    printf("%d \n", a+b); //Disse para exibir em tela o valor de a+b.
    //\n serve para pular linha.

    printf("O valor de a é = %d \n", a); //Disse para exibir em tela texto e números.

    scanf("%d", &a); //Desejo alterar o valor de a em tempo real da execução do meu programa.
    printf("O valor de a mudou para %d \n", a); //Mandei exibir em tela, o novo valor de a.

    //Lendo números quebrados
    float c = 5.50; //Passei o valor de a.
    float d = 5.20; //Passei o valor de b.
    printf("%f \n", c+d); //int é para números inteiros e float para números quebrados, bem como o %d e o %f.

    //Lendo letras
    char e = 't';
    printf("O valor de e é = %c \n", e);
    fflush(stdin);
    scanf("%c", &e);
    printf("o valor de e mudou para = %c \n", e);
}



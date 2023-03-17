
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    printf("\n\nFIXANDO O CONTEÚDO\n\n");
    printf("Retorno errado na função - se for um programa .C, minha função main pode ser do tipo void, ou seja, sem retorno ou int, retornando um valor numérico.");
    printf("\nMas se for um programa ponto CPP, ou seja C plus plus, a função main não pode ser vazia, precisa ser do tipo int, que é o caso aqui com o Code::Blocks.\n\n");
    printf("A Biblioteca #include <stdio.h> serve para: LER e EXIBIR valores em tela. Valores entrada e saída.");
    printf("\nDá pra fazer uma associação bem bacana da letra I e da letra O do stdio com input e Output. E também pra facilitar, com periféricos de hardware.\n\n");
    printf("A Biblioteca #include <stdlib.h> serve para: realizarmos operações matemáticas, alocarmos espaço na memória e também, fazermos a conversão de valores aleatórios.\n\n");
    printf("Já a Biblioteca #include <locale.h> serve para: inserção de acentos e caracteres especiais.\n\n");
    printf("IMPORTANTE 01 - Todas as vezes que eu for utilizar a Biblioteca de acentuação, obrigatoriamente, antes de informar valores que eu desejo que apareçam em tela,");
    printf("\neu preciso setar o comando setlocale dentro da minha função.\n\n");
    printf("O comando para printar valores em tela é o printf e para printar algum valor eu devo passar o comando printf, abrir e fechar parenteses,");
    printf("\ndentro dos parenteses abrir e fechar aspas duplas, e depois dos parenteses inserir ponto e vírgula - aí o valor que eu quero exibir em tela deve ser declarado");
    printf("\ndentro das aspas.\n\n");
    printf("O comando contra-barra n serve para: pular linha, sendo utilizado uma vez dá apenas espaço, e sendo utulizado duas vezes deixa uma linha em branco entre duas coisas.\n\n");

    printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");

    //Variável do tipo Inteira
    int a = 5; //Passar um valor para a minnha variável.
    printf("%d \n\n", a); //Imprimir minha variável em tela.

    int b = 12;
    printf("O valor da variável b é = %d \n", b); //Imprimir minha variável em tela, acompanhada de um texto.
    printf("O valor de a+b é = %d \n\n", a+b);

    scanf("%d", &a); //Alterar em tempo real, o valor de uma variável, na memória do computador.
    printf("\nO valor da variável a mudou para = %d \n\n", a);


    printf("\n\nIMPORTANTE 02 - Sobre o prcentagem d, ele faz menção a uma variável do tipo Inteira. Se fossem variáveis do tipo Valor quebrado, seria porcentagaem f. \n\n");
    printf("IMPORTANTE 03 - Sobre o comando Scanf, ele significa, escaneie um valor inteiro para a minha variável a. E onde está minha variável a?");
    printf("R: Está lá na no endereço da variável a na memória do computador, que é representado pelo &! \n\n\n\n");


    //Variável do tipo Float/Quebrada
    float c = 5.3;
    printf("O valor da variável c é Float, um número quebrado, veja, c = %f \n\n", c);
    scanf("%f", &c);
    printf("\nO valor de c mudou para %f \n\n", c);

    //Variável do tipo Char/Letras únicas
    char d = 'y';
    printf("O valor da variável d é Texto, d = %c \n\n", 'y');
    fflush(stdin);
    scanf("%c", &d);
    printf("\nO valor de d mudou para %c \n\n", d);


    printf("\n\nIMPORTANTE 04 - Sobre o comando fflush, ele significa limpeza de Buffer, ou seja, limpeza de arquivos temporários alocados na memória.");
    printf("\nNo C, quando nós lemos um valor, antes dele ir para a variável, ele passa por um lugarzinho chamado Buffer, que é um espaço de memória temporário.");
    printf("\nEle vem primeiro para o Buffer, e depois ele vai lá para a minha variável... Então pode acontecer, em momentos que nós já utilizamos o Buffer anteriormente,");
    printf("\nde ele conter lixo. Logo, antes de eu ler um valor para Char é sempre bom que eu limpe o Buffer com a Função fflush.\n\n");

}



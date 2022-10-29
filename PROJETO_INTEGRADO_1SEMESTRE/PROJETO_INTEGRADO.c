// DECLARAÇÃO DAS BIBLIOTECAS DO C
#include <stdio.h>
#include <stdlib.h>

// ABERTURA DO MAIN
int main(){

    //DECLARAÇÃO DAS VARIAVEIS
    char nome_usuario [100];
    char endereco_usuario [200];
    char telefone_usuario [11];

    //LEITURA DAS VARIAVEIS 
    //NOME
    printf("Ola :D, digite seu nome por favor: \n");
    gets(nome_usuario);
    //ENDEREÇO
    printf("Agora digite seu endereco por favor: \n");
    gets(endereco_usuario);
    //TELEFONE
    printf("E por ultimo digite seu telefone com o DDD por favor: \n");
    gets(telefone_usuario);

    //MOSTRANDO OS DADOS INSERIDOS
    printf("\n O nome que digitou: %s",nome_usuario);
    printf("\n O seu endereco: %s",endereco_usuario);
    printf("\n E o seu telefone: %s",telefone_usuario);
    printf("\n Obrigado por utilizar esse programa, tchau =D");

    //RETURN DE FIM DO PROGRAMA
    return (EXIT_SUCCESS);

}
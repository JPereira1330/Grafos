#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"
#include "list.h"

int menuTipoGrafo(){
    char op;

    clear();
    printf(" [ G R A F O S ]\n\n");
    printf(" ~> Tipo de grafo? \n\n");
    printf(" [ 1 ] Grafo orientado. \n");
    printf(" [ 2 ] Grafo nao orientado. \n");
    printf(" [ * ] Opcao: ");
    scanf(" %c", &op);

    switch(op){
        case '1':
            return 1;
            break;
        case '2':
            return 2;
            break;
    }

    return menuTipoGrafo();
}

int menuValorado(){
    char op;

    clear();
    printf(" [ G R A F O S ]\n\n");
    printf(" ~> Tipo de grafo? \n\n");
    printf(" [ 1 ] Grafo valorado. \n");
    printf(" [ 2 ] Grafo nao valorado. \n");
    printf(" [ * ] Opcao: ");
    scanf(" %c", &op);

    switch(op){
        case '1':
            return 1;
            break;
        case '2':
            return 2;
            break;
    }

    return menuValorado();
}

void menuArestas(LISTA lis, int valorado){

    int len;
    char entrada[32];

    printf(" [ G R A F O S ] \n\n");
    printf("\n\n");
    printf(" ~> Capturando arestas \n");
    if(valorado == 0){
        printf(" [ * ] Inserindo arestas: noma a,nome b,peso \n");
        printf("       Ex: ~> vertice_1,vertice_2, 10 \n");
    }else{
        printf(" [ * ] Inserindo arestas: noma a,nome b \n");
        printf("       Ex: ~> vertice_1,vertice_2 \n");
    }
    printf("       Obs: Não use espacamento. \n");
    printf(" [ * ] Quando não possui aresta. \n");
    printf("       Ex: ~> vertice_1 \n");
    printf(" [ * ] Para sair utiliza !q \n");
    printf("       Ex: ~> !q\n");
    printf("\n\n");

    do{
        // Capturando arestas
        fflush(stdin);
        printf(" ~> ");
        scanf("%s", entrada);

        // Separando por virgula
        len = strlen(entrada);


    }while(strcmp(entrada, "!q") != 0);

    //return lis;
}

void clear(){
    for(int i = 0; i <= 40; i++){
        printf("\n");
    }
}
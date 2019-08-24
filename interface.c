#include <stdio.h>
#include "interface.h"

int menuTipoGrafo(){
    char op;

    //clear();
    printf(" [ G R A F O S ]\n\n");
    printf(" ~> Tipo de grafo? \n\n");
    printf(" [ 1 ] Grafo orientado. \n");
    printf(" [ 2 ] Grafo nao orientado. \n");
    printf(" [ * ] Opcao: ");
    limparBuffer();
    scanf("%c", &op);

    switch(op){
        case '1':
            return 1;
        case '2':
            return 2;
    }

    return menuTipoGrafo();
}

int menuValorado(){
    char op;

    //clear();
    printf(" [ G R A F O S ]\n\n");
    printf(" ~> Tipo de grafo? \n\n");
    printf(" [ 1 ] Grafo valorado. \n");
    printf(" [ 2 ] Grafo nao valorado. \n");
    printf(" [ * ] Opcao: ");
    limparBuffer();
    scanf("%c", &op);

    switch(op){
        case '1':
            return 1;
        case '2':
            return 2;
    }

    return menuValorado();
}

void limparBuffer(){
    char c;
    while( (c = fgetc(stdin))!= EOF && c != '\n'){};
}

void clear(){
    for(int i = 0; i <= 20; i++){
        printf("\n");
    }
}
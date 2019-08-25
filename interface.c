#include <stdio.h>
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
    scanf("%c", &op);

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
    scanf("%c", &op);

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

LISTA menuVetores(){

    return NULL;
}

void clear(){
    for(int i = 0; i <= 20; i++){
        printf("\n");
    }
}
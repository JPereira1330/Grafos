#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"
#include "list.h"

int main(int argc, char** argv){
    
    int op = 1;
    int tipoGrafo;
    int valorado;

    //valorado  = menuValorado();
    //tipoGrafo = menuTipoGrafo();

    LISTA teste = newList();
    add(&teste, "teste");
    add(&teste, "1");
    add(&teste, "2");
    add(&teste, "3");
    add(&teste, "4");
    add(&teste, "5");
    add(&teste, "6");
    printLista(&teste);

    return 1;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"
#include "list.h"

int main(int argc, char** argv){
    
    int op = 1;
    int tipoGrafo;
    int valorado;
    LISTA list;

    list = newList();

    valorado  = menuValorado();
    tipoGrafo = menuTipoGrafo();
    menuArestas();
    
    
    LISTA teste = newList();
    add(&teste, "teste");
    add(&teste, "1");
    addAresta(&teste, "2","Jose", 0);
    add(&teste, "3");
    addAresta(&teste, "4","Joao", 0);
    add(&teste, "5");
    add(&teste, "6");
    printLista(&teste);
    
    return 1;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

struct lista{
    VERTICE atual;
    LISTA proximo;
    LISTA anterior;
};

struct vertice{
    char *nome;
};

struct aresta{
    int peso;
    VERTICE a;
    VERTICE b;
};

LISTA newList(){

    LISTA lis;
    lis = (LISTA) malloc(sizeof(struct lista));

    if(lis == NULL){
        printf(" [ ERRO ] Nao foi possivel alocar espaço na memoria.");
        return NULL;
    }

    // Tirar lixo da memoria
    memset(lis, 0, sizeof(struct lista));

    // Inicializando como NULL
    lis->atual = NULL;
    lis->anterior = NULL;
    lis->proximo = NULL;

    return lis;
}

void add(LISTA *l, char *nome){

    // Primeira inserção
    if( (*l)->atual == NULL ){
        VERTICE vert = (VERTICE) malloc(sizeof(struct lista));
        vert->nome = nome;
        (*l)->atual = vert;
        return;
    }

    // Proxima inserção
    if( (*l)->proximo == NULL ){

        // Criando novo vertice
        VERTICE vert = (VERTICE) malloc(sizeof(struct vertice));
        vert->nome = nome;

        // Criando nova lista
        LISTA novaLista = (LISTA) malloc(sizeof(struct lista)); 
        novaLista->atual = vert;

        // Atribuindo novo valor a lista
        (*l)->proximo = novaLista;
        return;
    }

    // Caso o proximo já esteja preenchido
    if( (*l)->proximo != NULL ){
        LISTA pro = (*l)->proximo;
        add( &pro, nome);
        return;
    }

    printf(" [ERRO] Ocorreu algum erro durante a adição.");
    return;
}

void printLista(LISTA *l){

    char *nome = (*l)->atual->nome;
    printf("%s \n", nome);

    if((*l)->proximo != NULL){
        LISTA pro = (*l)->proximo;
        printLista(&pro);
    }
}
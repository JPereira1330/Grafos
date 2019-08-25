#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

struct lista{
    ARESTA atual;
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

ARESTA newAresta(){

    ARESTA are;
    are = (ARESTA) malloc(sizeof(struct aresta));

    if(are == NULL){
        printf(" [ ERRO ] Nao foi possivel alocar espaço na memoria.");
        return NULL;
    }

    // Tirar lixo da memoria
    memset(are, 0, sizeof(struct aresta));

    // Inicializando como NULL
    are->peso = 0;
    are->a = NULL;
    are->b = NULL;

    return are;
} 

VERTICE newVertice(){

    VERTICE ver;
    ver = (VERTICE) malloc(sizeof(struct vertice));

    if(ver == NULL){
        printf(" [ ERRO ] Nao foi possivel alocar espaço na memoria.");
        return NULL;
    }

    // Tirar lixo da memoria
    memset(ver, 0, sizeof(struct vertice));

    // Inicializando como NULL
    ver->nome = NULL;

    return ver;
}

// Adicionando uma unica vertice
void add(LISTA *l, char *nome){

    // Primeira inserção
    if( (*l)->atual == NULL ){
        
        // Criando primeira vertice
        VERTICE vert = newVertice();
        vert->nome = nome;

        // Criando aresta unica
        ARESTA ares = newAresta();
        ares->a = vert;

        // Atribuindo a lista
        (*l)->atual = ares;

        return;
    }

    // Proxima inserção
    if( (*l)->proximo == NULL ){

        // Criando novo vertice
        VERTICE vert = newVertice();
        vert->nome = nome;

        // Criando aresta unica
        ARESTA ares = newAresta();
        ares->a = vert;

        // Criando nova lista
        LISTA novaLista = newList(); 
        novaLista->atual = ares;

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

void addAresta(LISTA *l, char *nome_a, char *nome_b, int peso){

    // Primeira inserção
    if( (*l)->atual == NULL ){
        
        // Criando primeira vertice
        VERTICE vert_a = newVertice();
        vert_a->nome = nome_a;

        // Criando segundo vertice
        VERTICE vert_b = newVertice();
        vert_b->nome = nome_b;

        // Criando aresta unica
        ARESTA ares = newAresta();
        ares->a = vert_a;
        ares->b = vert_b;
        ares->peso = peso;

        // Atribuindo aresta a lista
        (*l)->atual = ares;

        return;
    }

    // Proxima inserção
    if( (*l)->proximo == NULL ){

        // Criando primeira vertice
        VERTICE vert_a = newVertice();
        vert_a->nome = nome_a;

        // Criando segundo vertice
        VERTICE vert_b = newVertice();
        vert_b->nome = nome_b;

        // Criando aresta unica
        ARESTA ares = newAresta();
        ares->a = vert_a;
        ares->b = vert_b;
        ares->peso = peso;

        // Criando proxima lista
        LISTA pro = newList();
        pro->atual = ares;

        // Atribuindo aresta a lista
        (*l)->proximo = pro;

        return;
    }

    // Caso o proximo já esteja preenchido
    if( (*l)->proximo != NULL ){
        LISTA pro = (*l)->proximo;
        addAresta(&pro, nome_a, nome_b, peso);
        return;
    }

    printf(" [ERRO] Ocorreu algum erro durante a adição.");
    return;
}

void printLista(LISTA *l){

    char *a;
    char *b;

    a = (*l)->atual->a->nome;
    
    if((*l)->atual->b != NULL){
        b = (*l)->atual->b->nome;
        printf("%s,%s \n", a,b);
    }
    printf("%s \n", a);

    if((*l)->proximo != NULL){
        LISTA pro = (*l)->proximo;
        //free(a);
        //free(b);
        printLista(&pro);
    }
}
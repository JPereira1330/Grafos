#ifndef LIST_H
#define LIST_H

#ifdef __cplusplus
extern "C"{
#endif

    // Struct's
    typedef struct lista *LISTA;
    typedef struct vertice *VERTICE;
    typedef struct aresta *ARESTA;

    // Gerenciamento da lista
    LISTA newList();
    void add(LISTA *l, char *nome);
    void printLista(LISTA *l);
    
#ifdef __cplusplus
}
#endif

#endif  // LIST_H
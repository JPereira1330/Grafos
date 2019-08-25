#ifndef INTERFACE_H
#define INTERFACE_H

#ifdef __cplusplus
extern "C"{
#endif

    #include "list.h"

    // Menu de intereação com o usuario
    int menuTipoGrafo();
    int menuValorado();
    LISTA menuVetores();

    // Gerenciador de interface
    void clear();

#ifdef __cplusplus
}
#endif

#endif  // LIST_H
#ifndef LIST_H
#define LIST_H

#ifdef __cplusplus
extern "C"{
#endif

    // Menu de intereação com o usuario
    int menuTipoGrafo();
    int menuValorado();

    // Gerenciador de interface
    void limparBuffer();
    void clear();

#ifdef __cplusplus
}
#endif

#endif  // LIST_H
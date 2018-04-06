//
// Created by Carlos on 31/3/2018.
//

#ifndef PROJECTO2_NODO_H
#define PROJECTO2_NODO_H

#include "ListaenNodo.h"
#include "Registro.h"

class Nodo {
public:
    char id[30];
    Nodoenlista listrep;
    Nodo *left;
    Nodo*right;
    int alturader;
    int alturaizq;
};


#endif //PROJECTO2_NODO_H

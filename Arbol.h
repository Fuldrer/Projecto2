//
// Created by Carlos on 31/3/2018.
//

#ifndef PROJECTO2_ARBOL_H
#define PROJECTO2_ARBOL_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<cctype>
#include <conio.h>
#include "Nodo.h"
#include "Registro.h"
#include <fstream>

typedef Nodo*node;
using namespace std;

class Arbol {
public:
    void insertar(Registro reg,node &);
    void buscar(string nombre,string apellido,node &);
    void postorden(node &);
    void preorden(node &);
    void inorder(node &);
    int bsheight(node &);
    Nodo srl(node &);
    Nodo drl(node &);
    Nodo srr(node &);
    Nodo drr(node &);
};


#endif //PROJECTO2_ARBOL_H

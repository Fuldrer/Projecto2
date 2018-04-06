//
// Created by Carlos on 4/4/2018.
//

#ifndef PROJECTO2_GO_H
#define PROJECTO2_GO_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

struct dataRep{
    int code=-1;
    int pos=-1;
    int sig=-1;
};

struct dataName{
    char nombre[30];
    char apellido[30];
    int siguiete =-1;
    int posenRep =-1;
};

struct dataApellido{
    char lastname[30];
    int izquierdo=-1;
    int derecho=-1;
    int pos=-1;
};
class Go {
public:

private:
    string rep = "Lista_Repetidos.dat";
    string nombre = "Lista_Nombre.dat";
    string apellido = "AVL_Apellido.dat";
    
};


#endif //PROJECTO2_GO_H

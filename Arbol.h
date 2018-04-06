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

using namespace std;

struct node{
    int element;
    node*left;
    node*right;
    int height;
};
typedef struct node *nodeptr;

class Arbol {
public:
    void insert(int,nodeptr &);
    void del(int, nodeptr &);
    int deletemin(nodeptr &);
    void find(int,nodeptr &);
    void preorder(nodeptr);
    void inorder(nodeptr);
    void postorder(nodeptr);
    int bsheight(nodeptr);
    nodeptr srl(nodeptr &);
    nodeptr drl(nodeptr &);
    nodeptr srr(nodeptr &);
    nodeptr drr(nodeptr &);
    int max(int,int);
    void guardar(nodeptr &);
    void importar(nodeptr &);
    //int nonodes(nodeptr);

};


#endif //PROJECTO2_ARBOL_H

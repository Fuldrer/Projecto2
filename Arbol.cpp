//
// Created by Carlos on 31/3/2018.
//

#include "Arbol.h"

void Arbol::insertar(Registro reg, node &raiz) {
    if(raiz == nullptr){
        memcpy(&raiz->id,&reg.lastname,30);
        raiz->alturader=0;
        raiz->alturaizq=0;
    }
    else if(strcmp(raiz->id,reg.lastname)==0){
        raiz->listrep.root = reg;
    }
    else if(strcmp(raiz->id,reg.lastname)<0){
        insertar(reg,raiz->right);
    }
    else{
        insertar(reg,raiz->left);
    }
}

void Arbol::buscar(string nombre, string apellido,node &raiz) {

}

void Arbol::postorden(node &raiz) {

}

void Arbol::preorden(node &raiz) {

}

void Arbol::inorder(node &raiz) {

}

int Arbol::bsheight(node &raiz) {

    return 0;
}

Nodo Arbol::srl(node &raiz) {
    return Nodo();
}

Nodo Arbol::drl(node &raiz) {
    return Nodo();
}

Nodo Arbol::srr(node &raiz) {
    return Nodo();
}

Nodo Arbol::drr(node &raiz) {
    return Nodo();
}

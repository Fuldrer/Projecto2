//
// Created by Carlos on 31/3/2018.
//

#include "Arbol.h"
void Arbol::insert(int x, nodeptr &p) {
    if (p == NULL)
    {
        p = new node;
        p->element = x;
        p->left=NULL;
        p->right = NULL;
        p->height=0;
        if (p==NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (x<p->element)
        {
            insert(x,p->left);
            if ((bsheight(p->left) - bsheight(p->right))==2)
            {
                if (x < p->left->element)
                {
                    p=srl(p);
                }
                else
                {
                    p = drl(p);
                }
            }
        }
        else if (x>p->element)
        {
            insert(x,p->right);
            if ((bsheight(p->right) - bsheight(p->left))==2)
            {
                if (x > p->right->element)
                {
                    p=srr(p);
                }
                else
                {
                    p = drr(p);
                }
            }
        }
        else
        {
            cout<<"Nodo ya existe en el arbol\n"<<endl;
        }
    }
    int m,n,d;
    m=bsheight(p->left);
    n=bsheight(p->right);
    d=max(m,n);
    p->height = d + 1;
}

void Arbol::del(int x, nodeptr &p) {
    nodeptr d;
    if (p==NULL)
    {
        cout<<"Elemento no Existe\n"<<endl;
    }
    else if ( x < p->element)
    {
        del(x,p->left);
    }
    else if (x > p->element)
    {
        del(x,p->right);
    }
    else if ((p->left == NULL) && (p->right == NULL))
    {
        d=p;
        free(d);
        p=NULL;
        cout<<"Borrado Correctamente\n"<<endl;
    }
    else if (p->left == NULL)
    {
        d=p;
        free(d);
        p=p->right;
        cout<<"Borrado Correctamente\n"<<endl;
    }
    else if (p->right == NULL)
    {
        d=p;
        p=p->left;
        free(d);
        cout<<"Borrado Correctamente\n"<<endl;
    }
    else
    {
        p->element = deletemin(p->right);
    }
}

int Arbol::deletemin(nodeptr &p) {
    int c;
    if (p->left == NULL)
    {
        c=p->element;
        p=p->right;
        return c;
    }
    else
    {
        c=deletemin(p->left);
        return c;
    }
}

void Arbol::find(int x, nodeptr &p) {
    if (p==NULL)
    {
        cout<<"El nodo no existe\n"<<endl;
    }
    else
    {
        if (x < p->element)
        {
            find(x,p->left);
        }
        else
        {
            if (x>p->element)
            {
                find(x,p->right);
            }
            else
            {
                cout<<"Nodo Encontrado!\n"<<endl;
            }
        }
    }
}

void Arbol::preorder(nodeptr p) {
    if (p!=NULL)
    {
        cout<<p->element<<"\t";
        preorder(p->left);
        preorder(p->right);
    }
}

void Arbol::inorder(nodeptr p) {
    if (p!=NULL)
    {
        inorder(p->left);
        cout<<p->element<<"\t";
        inorder(p->right);
    }
}

void Arbol::postorder(nodeptr p) {
    if (p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->element<<"\t";
    }
}

int Arbol::bsheight(nodeptr p) {
    int t;
    if (p == NULL)
    {
        return -1;
    }
    else
    {
        t = p->height;
        return t;
    }
}

nodeptr Arbol::srl(nodeptr &p1) {
    nodeptr p2;
    p2 = p1->left;
    p1->left = p2->right;
    p2->right = p1;
    p1->height = max(bsheight(p1->left),bsheight(p1->right)) + 1;
    p2->height = max(bsheight(p2->left),p1->height) + 1;
    return p2;
}

nodeptr Arbol::drl(nodeptr &p1) {
    p1->left=srr(p1->left);
    return srl(p1);
}

nodeptr Arbol::srr(nodeptr &p1) {
    nodeptr p2;
    p2 = p1->right;
    p1->right = p2->left;
    p2->left = p1;
    p1->height = max(bsheight(p1->left),bsheight(p1->right)) + 1;
    p2->height = max(p1->height,bsheight(p2->right)) + 1;
    return p2;
}

nodeptr Arbol::drr(nodeptr &p1) {
    p1->right = srl(p1->right);
    return srr(p1);
}

int Arbol::max(int val1, int val2) {
    return ((val1 > val2) ? val1 : val2);
}


#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include "Registro.h"
#include <string.h>
#include "Nodo.h"
using namespace std;
struct registo{
    int id;//4
    char name[30];
    char lastname[30];
    char credit_card[25];
    char date[12];
    short int day;//2
    short int month;//2
    short int year;//2
    char payment_type[10];
    double total;//8
    char business_type[20];
    char business_name[52];
};
int main() {
    ifstream prueba("datab.dat",ios::in|ios::binary);
    //short int pesa 2 bytes

    for(int x=0;x<20;x++) {
        registo reg;
        prueba.read(reinterpret_cast<char *>(&reg), 200);
        cout << reg.id << endl;
        cout << reg.name << endl;
        cout << reg.lastname << endl;
        cout << reg.credit_card << endl;
        cout << reg.date << endl;
        cout << reg.day;
        cout << '/';
        cout << reg.month;
        cout << '/';
        cout << reg.year << endl;
        cout << reg.payment_type << endl;
        cout << reg.total << endl;
        cout << reg.business_type << endl;
        cout << reg.business_name << endl;
        cout<<"-------------"<<endl;
    }
    /*ifstream prueba("datab.dat",ios::in|ios::binary);
    Registro reg;
    prueba.read(reinterpret_cast<char *>(&reg), 200);
    Nodo*nuevo = new Nodo();
    nuevo->reg.root = reg;
    memcpy(&nuevo->id,&reg.lastname,30);
    cout<<nuevo->id;
    cout<<nuevo->reg.root.lastname;
    prueba.read(reinterpret_cast<char *>(&reg), 200);
    nuevo->reg.next=reg;
    cout<<nuevo->reg.next.lastname;*/

    //std::cou;t << "Hello, World!" << std::endl;
    return 0;
}
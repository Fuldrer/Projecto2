//
// Created by Carlos on 31/3/2018.
//

#ifndef PROJECTO2_REGISTRO_H
#define PROJECTO2_REGISTRO_H


class Registro {
public:
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
    char business_name[50];
};


#endif //PROJECTO2_REGISTRO_H

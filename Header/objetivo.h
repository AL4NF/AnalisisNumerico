#ifndef OBJETIVO_H_INCLUDED
#define OBJETIVO_H_INCLUDED
#include"GOTOXY.h"
#include<iostream>
using namespace std;
void objetiv(void)
{
   gotoxy(30,2); cout<<"OBJETIVO";
   gotoxy(0,5);cout<<"El objetivo principal es el de encontrar soluciones aproximadas a problemas complejos utilizando\nsolo operaciones simples de la aritmetica, es decir, se trata de resolver problemas dificiles\nmediante muchos pasos faciles.";
   cout<<endl<<endl;
   system("pause");
   system("cls");
}


#endif // OBJETIVO_H_INCLUDED

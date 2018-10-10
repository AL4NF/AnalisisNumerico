#ifndef PORTADA_H_INCLUDED
#define PORTADA_H_INCLUDED
#include"GOTOXY.h"
#include<iostream>
using namespace std;
void portadita(void)
{
   gotoxy(30,3);cout<<"INSTITUTO POLITECNICO NACIONAL";
   gotoxy(20,5);cout<<"ESCUELA SUPERIOR DE INGENIERIA MECANICA Y ELECTRICA";
   gotoxy(37,7);cout<<"UNIDAD ZACATENCO";
   gotoxy(37,9);cout<<"ANALISIS NUMERICO";
   gotoxy(34,11);cout<<"ALAN RAUL FISCAL CAMPOS";
   cout<<endl<<endl;
   system("pause");
   system("cls");
}


#endif // PORTADA_H_INCLUDED

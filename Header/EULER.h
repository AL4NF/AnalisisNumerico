//
//  EULER.h
//  prueba
//
//  Created by usuario on 11/21/18.
//  Copyright © 2018 usuario. All rights reserved.
//

#ifndef EULER_h
#define EULER_h
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

void let();
void Datos(float,int,float);
void Calculos_h();
double ERROR_RE(double, double);

int Euler(){
    
    cout<<"Solucion de la ecuacion dy/dx=1-y\n";
    Calculos_h();
    
    
    return 0;
}

void Calculos_h(){
    
    int n;
    float Xo,X2n,h,Yo,ERR;
    cout<<"Introduzca los valores de Xo y Xn: \n";cin>>Xo>>X2n;
    cout<<"Introduzca el valor de Yo: ";cin>>Yo;
    cout<<"Numero de iteraciones: ";cin>>n;
    h=((X2n-Xo)/n);
    Datos(h,n,Yo);
    return ;
}

double ERROR_RE(double xi1, double xi)
{
    return ((abs(xi1-xi))/(abs(xi1)))*100;
    
}
void Datos(float h,int n,float Yo){
    int n1,i;
    float xi,yi,yi1;
    system("cls");
    cout<<"Tabla de Iteraciones"<<endl<<endl;
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(2)<<endl;
    cout<<"n\t\txi\t\tyi\t\tyi+1\t\tErr"<<endl;
    yi=Yo;
    n1=1;
    i=0;
    do
    {
        if(n1!=1){
            yi=yi1;
        }
        yi1=yi+(h*(1-yi));
        xi=h*i;
        
        cout<<"n"<<n1<<"\t\t"<<xi<<"\t\t"<<yi<<"\t\t"<<yi1<<"\t\t"<<ERROR_RE(yi1, yi)<<endl;
        
        n1++;
        i++;
    }while(n1<=n);
    
    cout<<"\nLa solucion a la ecuacion es Yr= ";
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision<<yi1<<endl;
    cout<<"con un error correspondiente Err="<<ERROR_RE(yi1, yi)<<endl;
    
}


#endif /* EULER_h */

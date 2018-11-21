//
//  TRAPECIO.h
//  prueba
//
//  Created by usuario on 11/07/18.
//  Copyright © 2018 usuario. All rights reserved.
//

#ifndef TRAPECIO_h
#define TRAPECIO_h


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;
void trapecio(void)
{
    int y,m;
    double xo,xn,fxo,fxn,h,xi,fxi,At,n,f;
    cout<<"\n------===TRAPECIO===------\n\n"<<endl;

    cout<<"Funcion: x^2-x-1\n";
    cout<<"\n\nInserte el valor de Xo\n";
    cin>>xo;
    cout<<"Inserte el valor de Xn\n";
    cin>>xn;
    cout<<"Inserte el valor de n\n";
    cin>>n;
    cout<<"Inserte el numero de X\n";
    cin>>m;
    fxo=pow(xo,2)-xo-1;
    fxn=pow(xn,2)-xn-1;
    h=((xn-xo)/n);
    system("cls");
    cout<<"["<<xo<<","<<xn<<"]";
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(2)<<endl;
    cout<<"\nf(Xo)= "<<fxo<<endl<<"f(Xn)= "<<fxn<<endl<<"h= "<<h;
    f=0;
    for(y=1; y<=m; y++)
    {
        xi=xo+(y*h);
        fxi=pow(xi,2)-xi-1;
        cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(2)<<endl;
        cout<<"\nX("<<y<<")= "<<xi;
        cout<<"\nf(X"<<y<<")= "<<fxi;
        f=f+fxi;
        f=fxi;
        
    }
    
    cout<<"\n\nA="<<(h*(((fxo+fxn)/2)+f));
}

int Trapecio()
{
    trapecio();
    return 0;
}

#endif /* TRAPECIO_h */

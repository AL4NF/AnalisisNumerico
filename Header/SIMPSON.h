//
//  SIMPSON.h
//  prueba
//
//  Created by usuario on 11/11/18.
//  Copyright © 2018 usuario. All rights reserved.
//

#ifndef SIMPSON_h
#define SIMPSON_h

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;
void simpson(void)
{
    int y,m;
    double xo,x2,fxo,fx2,h,x,fx,a,n,p=0,i=0;
    cout<<"\n------===METODO DE SIMPSON===------\n\n"<<endl;
    cout<<"\n\nDame el valor de Xo\n";
    cin>>xo;
    cout<<"Dame el valor de X2n\n";
    cin>>x2;
    cout<<"Dame el valor de n\n";
    cin>>n;
    cout<<"Dame el numero de X\n";
    cin>>m;
    fxo=pow(xo,2)-xo-1;
    fx2=pow(x2,2)-x2-1;
    h=((x2-xo)/(2*n));
    system("cls");
    cout<<"["<<xo<<","<<x2<<"]";
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(2)<<endl;
    cout<<"\nf(Xo)= "<<fxo<<endl<<"f(X2n)= "<<fx2<<endl<<"h= "<<h;
    for(y=1; y<=m; y++)
    {
        x=xo+(y*h);
        fx=pow(x,2)-x-1;
        cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(2)<<endl;
        cout<<"\nX("<<y<<")= "<<x;
        cout<<"\nf(X"<<y<<")= "<<fx;
        if(y%2==0)
        {p=p+fx;}
        else
        {i=i+fx;}
    }
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(2)<<endl;
    
    cout<<"\n\nA="<<((h/3)*(fxo+fx2+(4*i)+(2*p)));
}

int Simpson()
{
    simpson();
    return 0;
}



#endif /* SIMPSON_h */

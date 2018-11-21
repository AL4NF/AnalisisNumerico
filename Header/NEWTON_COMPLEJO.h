//
//  NEWTON_COMPLEJO.h
//  
//
//  Created by usuario on 11/02/18.
//  Copyright © 2018 usuario. All rights reserved.
//

#ifndef NEWTON_COMPLEJO_h
#define NEWTON_COMPLEJO_h
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include <cmath>
#include <iomanip>
#include<complex>
using namespace std;
class Newton_Complex
{
    int n;
    complex<double> zi;
    complex<double> zii;
    float tol;
    
public:
    Newton_Complex()
    {
        n=tol=0;
        
        
    }
    void datos()
    {
        cout<<"\n\nINTRODUCIR LOS VALORES ENTRE PARENTESIS: (X,Y)\n";
        cout<<endl<<"Ingresa el valor inicial: "; cin>>zi;
        cout<<"Ingresa la tolerancia de error: "; cin>>tol;
    }
    void n_r()
    {
        double e;
        system("cls");
        cout<<"\t\tTabla de iteraciones."<<endl<<endl;
        cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(3);
        cout<<"n\t\txi\t\t\txi+1\t\t\tERR(%)"<<endl;
        do
        {
            zii=zi-Newton_Complex::fun(zi)/Newton_Complex::fun_pri(zi);
            e=Newton_Complex::ERR(zi,zii);
            cout<<n+1<<"\t\t"<<zi<<"\t\t"<<zii<<"\t\t"<<e*100<<endl;
            if(Newton_Complex::ERR(zi,zii)*100<tol)
                break;
            else
                zi=zii;
            n++;
        }while(e*100>=tol);
        cout<<"\n\nLa raiz con tolerancia mas aproximada al "<<tol<<"% es: "<<setprecision(4)<<zi;
        
    }
    
    complex<double> fun(complex<double> x)
    { return pow(x,2)+2.0;  }
    
    complex<double> fun_pri(complex<double> x)
    { return 2.0*x; }
    
    double ERR(complex<double> e,complex<double> e1)
    { return abs((e1-e)/e1);    }
};
int main()
{
    Newton_Complex o;
    cout << "Programa que resuelve la ecuacion Z^2+2 por el metodo de Newton-Raphson (tangente)" << endl;
    o.datos();
    o.n_r();
    
    return 0;
}


#endif /* NEWTON_COMPLEJO_h */

//
//  PUNTOFIJO.h
//  
//
//  Created by usuario on 10/10/18.
//
//

#ifndef PUNTOFIJO_h
#define PUNTOFIJO_h
#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

class Puntofijo{
private:
    double xi,err;
    int n;
public:
    Puntofijo();
    void datos();
    double calcularRaiz();
    double f(double x);
    double g(double x);
    void resultado();
    double Error_re(double x1,double x2);
    ~Puntofijo();
};
Puntofijo::Puntofijo(): xi(0.0), err(0.0), n(0) {}
void Puntofijo::datos()
{
    cout<<"\n------===PUNTO FIJO===------\n\n"<<endl;
    cout<<" "<<endl;
    cout<<"\t\tDame el valor inicial Xi= ";cin>>xi;
    cout<<"\t\tDame el margen de error err= ";cin>>err;
    cout<<"\t\tDame el numero de iteraciones n= ";cin>>n;
}

double Puntofijo::calcularRaiz()
{
    double xr=0.0;
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(4)<<endl;
    cout<<"n\t\txi\t\tf(Xi+1)\t\tError(%)"<<endl<<endl;
    
    for(int i=1;i<=n;i++)
    {
        xr=g(xi);
        
        cout<<i<<"\t\t"<<xi<<"\t\t"<<xr<<"\t\t"<<Error_re(xr,xi)*100<<endl;
        
        if(Error_re(xr,xi)<err)
            return xr;
        else
            xi=xr;
    }
    cout<<endl;
    return xr;
    
}

double Puntofijo::f(double x){return pow(x,2)-x-2.0;}
double Puntofijo::g(double x){return sqrt(x+2);}
void Puntofijo::resultado(){cout<<"la raiz es Xr= "<<calcularRaiz()<<endl;}
double Puntofijo::Error_re(double x1, double x2)
{return abs(x1-x2)/abs(x1);}
Puntofijo::~Puntofijo(){}
int puntofijo(void)
{
    Puntofijo obj;
    obj.datos();
    obj.resultado();
}
#endif /* PUNTOFIJO_h */

//
//  SECANTE.h
//  
//
//  Created by usuario on 10/10/18.
//
//

#ifndef SECANTE_h
#define SECANTE_h
#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

class Secante{
private:
    double xi,xii,err;
    int n;
public:
    Secante();
    void datos();
    double calcularRaiz();
    double f(double x);
    void resultado();
    double Error_re(double x1,double x2);
    ~Secante();
};
Secante::Secante(): xi(0.0), xii(0.0), err(0.0), n(0) {}
void Secante::datos()
{
    cout<<"\n------===SECANTE===------\n\n"<<endl;
    cout<<"Dame el intervalo izquierdo Xi-1= ";cin>>xii;
    cout<<"Dame el intervalo derecho Xi= ";cin>>xi;
    cout<<"Dame el margen de error err= ";cin>>err;
    cout<<"Dame el maximo numero de iteraciones n= ";cin>>n;
}

double Secante::calcularRaiz()
{
    double xr;
    xr=0.0;
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(7)<<endl;
    cout<<"n\t\txi\t\txi-1\t\tf(xi)\t\tf(Xi-1)\t\tf(Xi+1)\t\tError(%)"<<endl<<endl;
    
    for(int i=1;i<=n;i++)
    {
        xr=xi-((f(xi)*(xi-xii))/(f(xi)-f(xii)));
        cout<<i<<"\t\t"<<xi<<"\t"<<xii<<"\t" <<f(xi)<<"\t"<<f(xii)<<"\t"<<xr<<"\t"<<Error_re(xr,xi)*100<<endl;
        
        if(Error_re(xr,xi)<err)
            return xr;
        else
            xi=xii;
        xii=xr;
    }
    cout<<endl;
    return xr;
    
}

double Secante::f(double x){return pow(x,2)-x-1.0;}
void Secante::resultado(){cout<<"la raiz es Xr= "<<calcularRaiz()<<endl;}
double Secante::Error_re(double x1, double x2)
{return abs(x1-x2)/abs(x1);}
Secante::~Secante(){}
int main(void)
{
    Secante obj;
    obj.datos();
    obj.resultado();
}

#endif /* SECANTE_h */

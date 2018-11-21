//
//  LAGRANGE.h
//  prueba
//
//  Created by usuario on 11/04/18.
//  Copyright © 2018 usuario. All rights reserved.
//

#ifndef LAGRANGE_h
#define LAGRANGE_h

#include<iostream>
#include <iomanip>
using namespace std;

void lagrange(void)
{
    int i,j,n;
    double *x,*y,Xi,Yi,num,den;
    cout<<"Inserte el numero de puntos n= ";cin>>n;
    x=new double[n];
    y=new double[n];
    
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]= ";cin>>x[i];
        cout<<"\t\ty["<<i<<"]= ";cin>>y[i];
        cout<<"\n";
    }
    cout<<"Inserte el punto a interpolar o extrapolar x= ";cin>>Xi;
    
    for(i=0,Yi=0;i<n;i++)
    {
        for(num=1,j=0;j<n;j++)
        {
            if(j==i)continue;
            num=num*(Xi-x[j]);
        }
        for(den=1,j=0;j<n;j++)
        {
            if(j==i)continue;
            den=den*(x[i]-x[j]);
        }
        Yi=Yi+y[i]*(num/den);
    }
    cout<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(2)<<endl;
    cout<<"f("<<Xi<<")= "<<Yi;
}
int main()
{
    lagrange();
    return 0;
}


#endif /* LAGRANGE_h */

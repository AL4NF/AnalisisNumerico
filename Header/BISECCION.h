//
//  BISECCION.h
//  
//
//  Created by usuario on 10/10/18.
//
//
#ifndef BISECCION_h
#define BISECCION_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double);

int Biseccion()
{
    int imax,iter;
    double xi,xd,ea,em,test,xa,xaold;
    
    
    printf("\nMETODO DE BISECCION\n\n");
    
    printf("Introduce el X0\n");
    scanf("%lf",&xi);
    printf("Introduce el Xf\n");
    scanf("%lf",&xd);
    printf("Introduce el numero de iteraciones maximas\n");
    scanf("%d",&imax);
    printf("Introduce el error minimo\n");
    scanf("%lf",&em);
    
    iter=0;
    xa=0;
    
    if(f(xi)*f(xd)>0)
        printf("No hay raiz en ese intervalo\n");
    
    else{
        
        printf("\nIteracion    Raiz     Error aprox\n");
        
        do{
            
            iter++;
            
            xaold=xa;
            
            xa=(xi+xd)/2;
            
            ea=fabs((xa-xaold)/xa)*100;
            
            test=f(xi)*f(xa);
            
            if(test<0)
                xd=xa;
            
            else if(test >0)
                xi=xa;
            
            else
                ea=0;
            
            printf("\t\%d    %f    %f\n",iter,xa,ea);
            
            
        } while(ea>em && iter<imax);
        
    }
    
    
    
    return 0;
}


double f(double x)
{
    return x*x -2;
}




#endif /* BISECCION_h */

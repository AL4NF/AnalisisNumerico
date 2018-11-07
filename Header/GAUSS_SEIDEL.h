//
//  GAUSS_SEIDEL.h
//  Gauss-Jordan
//
//  Created by usuario on 10/24/18.
//  Copyright © 2018 usuario. All rights reserved.
//

#ifndef GAUSS_SEIDEL_h
#define GAUSS_SEIDEL_h

#include<iostream>

using namespace std;

int Seidel(void)
{
    float a[10][10], b[10], x[10], y[10];
    int n = 0, m = 0, i = 0, j = 0;
    cout << "\n------===GAUSS SEIDEL===------\n\n";
    cout << "Introduzca el numero de Incognitas (X, Y, Z, ...): ";//Definiendo el tamaño
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "\nIntroduzca los valores de: (" << i << ", " << j << "): ";//Llenado de Matriz
            cin >> a[i][j];
        }
    }
    cout << "\n\nIngrese los valores del Vector Resultado\n";//Llenado el vetor resultado
    for (i = 0; i < n; i++)
    {
        cout << "Resultado en:(" << i << ", " << i << ") ";
        cin >> b[i];
    }
    cout << "\n Cualel son los valores iniciales (puede ser solucion trivial: 0, 0, 0):\n";
    for (i = 0; i < n; i++)
    {
        cout << "Introduzca los valores iniciales:(" << i<<"):";
        cin >> x[i];
    }
    cout << "\nCuantas iteraciones quiere? : ";
    cin >> m;
    cout << "\n\nResultados:\n";
    while (m > 0)
    {
        for (i = 0; i < n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j = 0; j < n; j++)
            {
                if (j == i)
                    continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            cout << (i + 1, y[i]) << endl;
        }
        cout << " \n ";
        m--;
    }
    return 0;
}


#endif /* GAUSS_SEIDEL_h */

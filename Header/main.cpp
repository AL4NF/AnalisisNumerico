#include<iostream>
#include"PORTADA.h"
#include"OBJETIVO.h"
#include"BISECCION.h"
#include "NEWTON.h"
#include "NEWTON_COMPLEJO.h"
#include"SECANTE.h"
#include"PUNTOFIJO.h"
#include"GAUSS_JORDAN.h"
#include"GAUSS_SEIDEL.h"
#include".h"//
#include"LAGRANGE.h"
#include"MINIMOS_CUADRADOS.h"
#include"TRAPECIO.h"
#include"EULER.h"
#include"SIMPSON.h"
#include"KUTTA.h"//






using namespace std;

int main(void)
{
 portadita();
 system("pause");
 objetiv();

    void pausa();
    bool flag=false;
    char opc;
    
    do
    {
        
        cout << "Elija una opcion del Menu:" << endl;
        cout << "1. Metodo de Biseccion " << endl;
        cout << "2. Metodo de Newton-Rhapshon" << endl;
        cout << "3. Metodo de Newton Rhapshon Complejo" << endl;
        cout << "4. Metodo de Secante" << endl;
        cout << "5. Metodo de Punto Fijo" << endl;
        cout << "6. Metodo de Gauss Jordan" << endl;
        cout << "7. Metodo de Gauss Seidel" << endl;
        cout << "8. Metodo de Diferencia Dividida de Newton" << endl;
        cout << "9. Metodo de de Lagrange" << endl;
        cout << "10. Metodo de Minimos Cuadrados" << endl;
        cout << "11. Metodo del Trapecio" << endl;
        cout << "12. Metodo de Euler" << endl;
        cout << "13. Metodo de Simpson" << endl;
        cout << "14. Metodo de Runge Kutta" << endl;
        
        cout << "15. Salir" << endl;
        
        cin >> opc;
        
        switch(opc)
        {
            case '1':
                system("cls");
                cout << "Usted eligio el Metodo de Biseccion\n";
                Biseccion();
                pausa();
                break;
                
            case '2':
                system("cls");
                cout << "Usted eligio el Metodo de Newton-Rhapshon\n";
                Newton();
                pausa();
                break;
                
            case '3':
                system("cls");
                cout << "Usted eligio el Metodo de Newton-Rhapson Complejo\n";
                NewtonC();//revisar
                pausa();
                break;
                
            case '4':
                system("cls");
                cout << "Usted eligio el Metodo de Secante\n";
                Secante();
                pausa();
                break;
                
            case '5':
                system("cls");
                cout << "Usted eligio el Metodo de Punto Fijo\n";
                Puntofijo();
                pausa();
                break;
                
            case '6':
                system("cls");
                cout << "Usted eligio el Metodo de Gauss Jordan\n";
                Gauss();
                pausa();
                break;
                
            case '7':
                system("cls");
                cout << "Usted eligio el Metodo de Gauss Seidel\n";
                Seidel();
                pausa();
                break;
                
            case '8':
                system("cls");
                cout << "Usted eligio el Metodo de Diferencia Dividida de Newton\n";
                pausa();
                break;
                
            case '9':
                system("cls");
                cout << "Usted eligio el Metodo de Lagrange\n";
                Lagrange();
                pausa();
                break;
                
            case '10':
                system("cls");
                cout << "Usted eligio el Metodo de Minimos Cuadrados\n";
                Minimos();
                pausa();
                break;
                
            case '11':
                system("cls");
                cout << "Usted eligio el Metodo del Trapecio\n";
                Trapecio();
                pausa();
                break;
                
            case '12':
                system("cls");
                cout << "Usted eligio el Metodo de Euler\n";
                Euler();
                pausa();
                break;
                
            case '13':
                system("cls");
                cout << "Usted eligio el Metodo de Simpsonn";
                Simpson();
                pausa();
                break;
                
            case '14':
                system("cls");
                cout << "Usted eligio el Metodo de Runge Kutta\n";
                Kutta();
                pausa();
                break;
                
            case '15':
                flag=true;
                cout << "Usted ha finalizado el programa\n";
                //exit(1);
                break;
                
            default:
                system("cls");
                cout << "Opcion no valida.\a\n";
                pausa();
                break;
        }
    }while(flag!=true);
    
    //return 0;
}

void pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}
    
 system("cls");
}






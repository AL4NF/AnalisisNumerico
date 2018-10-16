#include<iostream>
#include"PORTADA.h"
#include"OBJETIVO.h"
#INCLUDE"BISECCION.h"
#include "NEWTON.h"
#include"SECANTE.h"
#include"PUNTOFIJO.h"
#include"GAUSS_JORDAN.h"

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
        cout << "7. Metodo de" << endl;
        cout << "8." << endl;
        cout << "9." << endl;
        cout << "10. Salir" << endl;
        
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
                cout << "Usted eligio el Metodo de.....\n";
                pausa();
                break;
                
            case '8':
                system("cls");
                cout << "Usted eligio el Metodo de.....\n";
                pausa();
                break;
                
            case '9':
                system("cls");
                cout << "Usted eligio el Metodo de.....\n";
                pausa();
                break;
                
            case '10':
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






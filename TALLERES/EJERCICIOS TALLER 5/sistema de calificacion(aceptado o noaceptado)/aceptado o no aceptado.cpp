#include <iostream>
using namespace std;

main (){

    int opcion; 
    double calificacion;
    cout << "[====== ACEPTACION DE CUPO ======]" << endl;
    cout << endl;
    cout <<"1. medicina" << endl;
    cout <<"2. Mecanica" << endl;
    cout <<"3. Robotica" << endl;
    cout <<"4. Administracion" << endl;
    cout <<"Introduzca la opcion: ";
    cin >> opcion;

    while ((opcion < 0) || (opcion > 4))
    {
        cout <<"Operacion ingresada no es valida, intente otra vez" << endl;
        cout << "Introduzca una opcion: ";
        cin >> opcion;
    
    }
    cout <<"Introduzca su calificacion: ";
    cin >> calificacion; 
    
    switch (opcion)
    {
    case 1:{
        if (calificacion >= 8.8)
        {
            cout << "Aceptada" << endl; 
        }
        else
        {
            cout << "No aceptada" << endl; 
        } 
    }
    break;
        case 2:{
            if (calificacion > 8.5)
            {
                cout << "Aceptada" << endl;
            }
            else
            {
            cout << "No aceptada" << endl; 
            } 
            }
    break;
        case 3:{
            if (calificacion >= 8.3)
            {
                cout << "Aceptada" << endl;
            }
            else
            {
            cout << "No aceptada" << endl; 
            } 

            }
    break;
        case 4:{
            if (calificacion >= 7.8)
            {
                cout << "Aceptada" << endl;
            }
            else
            {
            cout << "No aceptada" << endl; 
            } 

            }
    break;
    }

    system("pause");
    return 0;
}
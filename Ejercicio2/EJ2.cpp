#include "EJ2.h"
#include <iostream>

using namespace std;

void semana () {

    int dia;

    cout << "Introduce un día de la semana entre 1 y 7: " << endl; cin >> dia;

    switch (dia) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;


        default: cout << "El número introducido no es válido" << endl; break;
    }

}
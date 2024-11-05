#include "EJ1.h"
#include <iostream>

using namespace std;

void identificacion() {

    int numero;
    cout << "Introduce un numero entero: " << endl; cin >> numero;

    if (numero == 0 ) {
        cout << "El numero es 0" << endl;
    }
    else if (numero > 0) {
        cout << "El numero es positivo" << endl;
    }
    else {
        cout << "El numero es negativo" << endl;
    }

}
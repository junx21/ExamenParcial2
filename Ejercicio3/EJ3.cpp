#include "EJ3.h"
#include <iostream>

using namespace std;

void promedio() {

    double n1, n2, n3, n4, n5, n6, n7, n8, nf;

    cout << "Introduce las notas de los ejercicios: " << endl; cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;

    nf = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8) / 8;

    cout << "La nota final es: " << nf << endl;

}
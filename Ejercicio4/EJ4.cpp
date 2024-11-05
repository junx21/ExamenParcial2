#include "EJ4.h"
#include <iostream>
#include <algorithm>

using namespace std;

void promocion() {

    double p1, p2, p3, totalp;
    cout << "Introduce el precio de los productos:" << endl; cin >> p1 >> p2 >> p3;

    totalp = p1 + p2 + p3;

    double menorprecio = min({p1, p2, p3});
    totalp -= menorprecio;


    cout << "El precio total es: " << totalp << endl;
}
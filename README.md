# Link del Repositorio

https://github.com/junx21/ExamenParcial2.git

# Instrucciones 
Instrucciones de Entrega
Repositorio en GitHub:

Crea un repositorio privado en GitHub para este examen y compártelo solo después de la revisión si así lo deseas.
Fichero ZIP:

Al finalizar, descarga tu repositorio como un archivo ZIP con el nombre Apellido_Nombre_ExamenCPP.zip.
Archivo README.md:

Incluye un archivo README.md en el repositorio, que contenga:
Un enlace directo al repositorio.
Una breve descripción de cada ejercicio resuelto y el archivo donde se encuentra.
Usa Markdown para estructurar tu README.
Entrega:

Sube el archivo ZIP a la plataforma indicada antes de la fecha límite.
Aspectos Adicionales:

Organiza y comenta tu código para que sea fácil de leer y entender.
Si utilizas referencias externas, inclúyelas en el README.md.
# Parte 2: Problemas de Codificación (70 puntos en total)
## Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 
```cpp
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
```
*Archivo**: `EJ1.cpp`

## Ejercicio 2: Día de la Semana
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 

```cpp
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


```
*Archivo**: `EJ2.cpp`

## Ejercicio 3: Cálculo de Promedio de Calificaciones
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 
```cpp
#include "EJ3.h"
#include <iostream>

using namespace std;

void promedio() {

    double n1, n2, n3, n4, n5, n6, n7, n8, nf;

    cout << "Introduce las notas de los ejercicios: " << endl; cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;

    nf = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8) / 8;

    cout << "La nota final es: " << nf << endl;

}
```
*Archivo**: `EJ3.cpp`

## Ejercicio 4: Promoción de "3 por 2" en Tienda
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.
```cpp
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
```
*Archivo**: `EJ4.cpp`
### Uso de Perplexity, para implementar #include <algorithm>



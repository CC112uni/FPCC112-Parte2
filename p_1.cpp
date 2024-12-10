/*1. Escribir un programa que defina una clase con dos variables enteras y dos 
funciones miembros que permita ingresar los datos y mostrar los datos en 
pantalla.*/

#include <iostream>
using namespace std;

// Definimos la clase
class demo {
private://Mejoran el encapsulamiento y el control sobre el estado de la clase.
    int dato1; // Primer atributo
    int dato2; // Segundo atributo

public://Son necesarias para interactuar con los atributos y permitir operaciones seguras desde fuera de la clase.
    // Funciones miembro
    void ingreso_datos(int a, int b); 
    void mostrar_datos();
};

// Definimos las funciones miembro
void demo::ingreso_datos(int ca, int cb) {// el operador :: sirve para indicar que las variables van a ser tomadas de la clase demo
    this->dato1 = ca; // guarda el valor de ca en el atributo de la clase demo dato1
    this->dato2 = cb;
}

void demo::mostrar_datos() {//indica que la función mostrar_datos pertenece a demo y va a tomar datos de ahí
    cout << "Dato 1: " << dato1 << endl; // Mostramos dato1
    cout << "Dato 2: " << dato2 << endl; // Mostramos dato2
}

int main() {
    demo d1; // Creamos un objeto de la clase demo

    d1.ingreso_datos(10, 30); // Ingresamos valores al objeto
    d1.mostrar_datos();       // Mostramos los valores almacenados

    cout << "El tamaño de d1 es: " << sizeof(d1) << " bytes" << endl; // Mostramos el tamaño del objeto

    return 0;
}
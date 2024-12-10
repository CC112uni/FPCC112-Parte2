#include <iostream>
using namespace std;

// Definir el tipo enum estaciones
enum estaciones {primavera = 5, verano = 10, otoño = 15, invierno = 20};//tipo de variables enum, si no se especifican valores, empieza ascendente desde cero

// Clase que tiene un miembro de tipo enum estaciones
class Clima {
public:
    estaciones estacionActual;  // Miembro de datos de tipo enum definido arriba

    // Constructor que permite establecer el valor del enum
    Clima(estaciones estacion) : estacionActual(estacion) {}//Constructor clima que recibe una variable estacion de tipo estaciones que a su vez es enum, estacionActual es de tipo estaciones y esta almacena una estacion
                                                            //Crea una copia del valor estacion a Estacion actual.
    // Método para mostrar la estación
    void mostrarEstacion() {
        switch(estacionActual) {
            case primavera:
                cout << "La estación es Primavera." << endl;
                break;
            case verano:
                cout << "La estación es Verano." << endl;
                break;
            case otoño:
                cout << "La estación es Otoño." << endl;
                break;
            case invierno:
                cout << "La estación es Invierno." << endl;
                break;
            default:
                cout << "Estación desconocida." << endl;
        }
    }
};

int main() {
    // Crear un objeto de la clase Clima con la estación verano
    Clima miClima(verano);// mi clima es objeto del constructor clima, un constructor da valores para que la clase sea iniciada
    miClima.mostrarEstacion();  // ingresa a las instancia mostrarEstacion del objeto miClima

    return 0;
}


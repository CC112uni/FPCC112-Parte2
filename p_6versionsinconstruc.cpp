#include <iostream>
using namespace std;

class Persona {
private:
    string nombre; // Miembro de datos privado
    int edad;      // Miembro de datos privado

public:
    // Función miembro pública para obtener el nombre
    string obtenerNombre() {
        return nombre;
    }

    // Función miembro pública para obtener la edad
    int obtenerEdad() {
        return edad;
    }

    // Función miembro pública para establecer un nuevo nombre
    void establecerNombre(string nuevoNombre) {
        nombre = nuevoNombre;
    }

    // Función miembro pública para establecer una nueva edad
    void establecerEdad(int nuevaEdad) {
        if (nuevaEdad >= 0) { // Validación de edad
            edad = nuevaEdad;
        } else {
            cout << "La edad no puede ser negativa." << endl;
        }
    }
};

int main() {
    // Crear un objeto de la clase Persona sin utilizar un constructor
    Persona persona1;

    // Establecer los datos privados utilizando funciones miembro
    persona1.establecerNombre("Carlos");
    persona1.establecerEdad(25);

    // Acceder a los datos privados mediante funciones miembro
    cout << "Nombre: " << persona1.obtenerNombre() << endl;
    cout << "Edad: " << persona1.obtenerEdad() << endl;

    // Cambiar los datos privados mediante funciones miembro
    persona1.establecerNombre("Ana");
    persona1.establecerEdad(30);

    // Mostrar los datos actualizados
    cout << "Nombre actualizado: " << persona1.obtenerNombre() << endl;
    cout << "Edad actualizada: " << persona1.obtenerEdad() << endl;

    return 0;
}


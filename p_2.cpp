#include <iostream>
#include <cstring> // Para strcpy
using namespace std;

class Estudiante {
    private:
    char nombre[20];
    int edad;
    char ciclo[10];

public:
    void obtenerDatos(char[], int, char[]);//tiene que tener las variables de la clase
    void mostrarDatos();
};

// Definir las funciones miembro
void Estudiante::obtenerDatos(char nom[20], int ed, char cic[10]) {//las variables van a ser tomadas de la clase estudiante
    // Copiar los datos a los miembros de la clase
    strcpy(nombre, nom); // Copia nom a nombre, strcpy porque tiene que copiar caracter por caracter
    edad = ed;           // Asigna ed a edad
    strcpy(ciclo, cic);  // Copia cic a ciclo, strcpy porque tiene que copiar caracter por caracter
}

void Estudiante::mostrarDatos() {//las variables van a ser tomadas de la clase estudiante
    // Mostrar los datos almacenados
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Ciclo: " << ciclo << endl;
}

int main() {
    // Crear dos objetos
    Estudiante s1, s2;

    // Ingresar datos para el primer estudiante
    s1.obtenerDatos("Juan Perez", 20, "3er ciclo");
    cout << "Datos del primer estudiante:" << endl;
    s1.mostrarDatos();

    // Ingresar datos para el segundo estudiante
    s2.obtenerDatos("Maria Lopez", 19, "2do ciclo");
    cout << "\nDatos del segundo estudiante:" << endl;
    s2.mostrarDatos();

    return 0;
}

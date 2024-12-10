#include <iostream>
#include <cstring> 
using namespace std;

struct Persona {
    char nombre[30]; 
    int edad;        
};

int main() {
    
    Persona p;
    cout << "Ingrese el nombre de la persona: ";
    cin.getline(p.nombre, 30);

    cout << "Ingrese la edad de la persona: ";
    cin >> p.edad; 

    cout << "\nDatos de la persona:" << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;

    return 0;
}

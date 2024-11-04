#include <iostream>
using namespace std;

int sumaElementos(int* arreglo, int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += arreglo[i];
    }
    return suma;
}

int main() {
    int tamaño;
    cout << "Ingresa el tamaño del arreglo: ";
    cin >> tamaño;

    // Crear arreglo dinámico
    int* arreglo = new int[tamaño];
    
    cout << "Ingresa los elementos del arreglo: "<<endl;
    for (int i = 0; i < tamaño; i++) {
        cin >> arreglo[i];
    }

    // Llamar a la función y mostrar la suma
    int suma = sumaElementos(arreglo, tamaño);
    cout << "La suma de los elementos es: " << suma << endl;

    // Liberar memoria
    delete[] arreglo;
    return 0;
}

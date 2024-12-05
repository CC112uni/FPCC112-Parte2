#include <iostream>
using namespace std;

void llenar(int *arr, int tam) {
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        arr[i] = rand() % 10;//numeros del 1 al 9.
    }
}

void imprimir(int *arr, int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* eliminarElemento(int *a, int tam, int ind) {
    // Desplazar a la izquierda desde el índice especificado
    for (int i = ind; i < tam - 1; i++) {
        a[i] = a[i + 1];
    }

    // Crear un nuevo arreglo con el tamaño reducido
    int *nuevoArreglo = new int[tam - 1];//en este caso tenemos que reducir manualmente el tamaño del nueo arreglo por pasarlo como copia y no por referencia.
    for (int i = 0; i < tam - 1; i++) {
        nuevoArreglo[i] = a[i];
    }

    // Liberar memoria del arreglo antiguo
    delete[] a;

    return nuevoArreglo;
}

int main() {
    int tam;
    int ind;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tam;

    int *a = new int[tam];
    llenar(a, tam);

    cout << "Arreglo original: ";
    imprimir(a, tam);

    cout << "Ingrese el indice del elemento a eliminar: ";
    cin >> ind;

    if (ind >= 0 && ind < tam) {
        a = eliminarElemento(a, tam, ind);
        tam--; // Reducimos el tamaño en el programa principal
        cout << "Arreglo después de eliminar el elemento: ";
        imprimir(a, tam);
    } else {
        cout << "Indice fuera de rango" << endl;
    }

    delete[] a;// Liberar memoria del heap asignado en el ultimo if

    return 0;
}

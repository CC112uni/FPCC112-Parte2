#include <iostream>
using namespace std;

class Matriz {
private:
    int n;        // Tamaño de la matriz (n x n)
    int **matriz; // Doble puntero pues será una martriz bidimensional

public:
    // Constructor para inicializar la matriz de tamaño n x n
    Matriz(int tamaño) {
        n = tamaño;
        matriz = new int*[n];//matrices de punteros fila
        for (int i = 0; i < n; i++) {
            matriz[i] = new int[n];//representa las columnas
        }
    }

    // Destructor para liberar memoria
    ~Matriz() {
        for (int i = 0; i < n; i++) {
            delete[] matriz[i];//borra toda la fila completa osea todas las columnas de una fila
        }
        delete[] matriz;//borra el arreglo de punteros que apunta a cada fila
    }

    // Función para ingresar los elementos de la matriz
    void ingresarElementos() {
        cout << "Ingresa los elementos de la matriz " << n << "x" << n << ":" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> matriz[i][j];
            }
        }
    }

    // Función para imprimir la matriz
    void imprimirMatriz() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Función para ordenar los elementos de cada fila usando el método de burbuja
    void ordenarFilas() {
        for (int i = 0; i < n; i++) {
            // Método de burbuja para ordenar la fila i
            for (int j = 0; j < n - 1; j++) {
                for (int k = 0; k < n - j - 1; k++) {
                    if (matriz[i][k] > matriz[i][k + 1]) {
                        // Intercambiar elementos
                        int temp = matriz[i][k];
                        matriz[i][k] = matriz[i][k + 1];
                        matriz[i][k + 1] = temp;
                    }
                }
            }
        }
    }

    // Función para calcular la suma de la diagonal principal
    int sumaDiagonalPrincipal() {
        int suma = 0;
        for (int i = 0; i < n; i++) {
            suma += matriz[i][i]; // Elementos de la diagonal principal
        }
        return suma;
    }
};

int main() {
    int tamaño;

    cout << "Ingresa el tamaño de la matriz (n): ";
    cin >> tamaño;

    // Crear una matriz de tamaño n x n
    Matriz matriz(tamaño);//define el constructor llamado matriz

    // Ingresar los elementos de la matriz
    matriz.ingresarElementos();

    // Imprimir la matriz original
    cout << "\nMatriz original:" << endl;
    matriz.imprimirMatriz();

    // Ordenar los elementos de cada fila
    matriz.ordenarFilas();

    // Imprimir la matriz ordenada
    cout << "\nMatriz con filas ordenadas:" << endl;
    matriz.imprimirMatriz();

    // Calcular la suma de los elementos de la diagonal principal
    int sumaDiagonal = matriz.sumaDiagonalPrincipal();
    cout << "\nSuma de los elementos de la diagonal principal: " << sumaDiagonal << endl;

    return 0;
}


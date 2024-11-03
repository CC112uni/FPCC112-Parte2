/*1. Solicita al usuario un entero y crea un arreglo dinámico de ese tamaño. 
Luego, llena el arreglo con números ingresados por el usuario.*/

#include <iostream>
using namespace std;

void llenarArreglo(int *arr, int tam){
    for(int i = 0; i <tam; ++i){
        cout << "Ingrese el elemto " << i+1 << ": ";
        cin >> arr[i];
    }
}


int main(){
    int tam;
    cout << "Ingrese el tamaño: ";
    cin >> tam;

    int * arr = new int[tam];

    llenarArreglo(arr, tam);

    delete [] arr;

    return 0; 
    
}
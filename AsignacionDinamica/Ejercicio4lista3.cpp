/*4. Crea una función que reciba dos arreglos dinámicos y su tamaño, y 
devuelva un nuevo arreglo dinámico que sea la concatenación de ambos*/
#include <iostream>
using namespace std;

int * concatArreglos(int * a1, int *a2, int n1, int n2){
    int *a =  new int[n1+n2];
    for(int i = 0; i <n1; i++){
        a[i] = a1[i];
    }
    for(int i = 0; i <n2; i++){
        a[n1 + i] = a2[i];
    }
    return a;
}

void llenar(int *arr, int tam){
   //srand(time(NULL)) poder el inicio de semilla aqui ocasiona que las lista de numeros aleatorios primero se repita
    for(int i = 0; i < tam ; i++){
        arr[i] = rand()% 10;
    }
}

void imprimir(int * arr, int tam){
    for(int i = 0; i < tam ; i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    srand(time(NULL));//poner la semilla aqui origina verdaderamente tener numeros aleatorios en cada arreglo
    int n1 = 4;
    int n2 = 5;

    int *a1 = new int[n1];
    int *a2 = new int[n2];

    llenar(a1,n1);
   
    llenar(a2,n2);

cout<<"Primer arreglo: "<<endl;
    imprimir(a1, n1);
    cout << "\n";
 cout<<"Segundo arreglo: "<<endl;
    imprimir(a2,n2);
    cout << "\n";

    int *arrConcat = concatArreglos(a1,a2,n1,n2);
    cout<<"Arreglo concatenado: "<<endl;

    imprimir(arrConcat, n1+n2);

    // NO OLVIDAR LIBERAR MEMORIA
    delete [] a1;

    delete [] a2;

    delete [] arrConcat;

    return 0; 
}
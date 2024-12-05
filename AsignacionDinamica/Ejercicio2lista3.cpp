/*Crea una funcion que reciba un entero como parametro y devuelva un puntero a un arreglo dinámico de ese tamaño,lleno de numeros aleatorios*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int * Arregloaleatorio(int tam){//devuelve un puntero
    int*a=new int[tam];//aqui define a como puntero
    srand(time(NULL));
    for(int i=0;i<tam;i++){
        a[i]=rand()%99+1;//numeros del 1 al 99
    }
    return a;//"a" ya es un puntero int
}

void imprimir_matriz(int *arr,int tam){
    for(int i=0;i<tam;i++){
        cout<<arr[i]<<" ";
}
}
int main(){
    int tam;
    cout<<"Ingresar el tamaño del arreglo: ";
    cin>>tam;
    int *arr=Arregloaleatorio(tam);//arr es de tipo puntero int
    imprimir_matriz(arr,tam);
    delete[]arr;
}
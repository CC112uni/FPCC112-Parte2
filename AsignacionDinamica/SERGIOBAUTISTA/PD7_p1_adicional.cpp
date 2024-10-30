#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ordBurbuja(int n, int a[]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void imprimirarreglo(int n, int a[]){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main(){

    srand(time(0));

    int n;
    cout<<"Ingrese la cantidad de notas a generar: ";
    cin>>n;

    int nota;

    int *a = new int[n];

    for(int i = 0; i < n; i++){
        a[i] = rand() % 20;
        nota = a[rand() % n];
    }

    int respuesta;
    cout<<"Adivine la nota seleccionada: ";
    cin>>respuesta;

    while (respuesta < nota)
    {
        cout<<"La nota seleccionada es mayor"<<endl;
        cout<<"Adivine la nota seleccionada: ";
        cin>>respuesta;
    }
    
    while (respuesta > nota)
    {
        cout<<"La nota seleccionada es menor"<<endl;
        cout<<"Adivine la nota seleccionada: ";
        cin>>respuesta;
    }

    if(respuesta = nota){
        cout<<"Adivinaste!"<<endl;
    }

    cout<<"Notas ordenadas: ";
    ordBurbuja(n, a);
    imprimirarreglo(n, a);

    delete[] a;

    return 0;
}
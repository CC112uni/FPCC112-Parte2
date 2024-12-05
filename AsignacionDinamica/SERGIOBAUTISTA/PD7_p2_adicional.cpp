#include <iostream>

using namespace std;

void matriz(int** a, int F, int C){
    for(int i = 0; i < F; i++){
        for(int j = 0; j < C; j++){
            cout<<"Ingrese el valor del elemento a["<<i+1<<"]["<<j+1<<"]: ";
            cin>>a[i][j];
        }
    }
}

void imprimir(int** a, int F, int C){
    for(int i = 0; i < F; i++){
        for(int j = 0; j < C; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(int argc, char *argv[]){

    int i, j, F, C;

    int **a;
    cout<<"Introduzca las dimensiones de la matriz: "<<endl;
    cin>>F;
    cin>>C;

    a = new int*[F];
    for(i = 0; i < F; i++){
        a[i] = new int[C];
    }

    for(j = 0; j < C; j++){
        delete[] a[j];
    }
    delete[] a;

    return 0;
}
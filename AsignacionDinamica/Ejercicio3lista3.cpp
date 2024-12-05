/*3. Escribe un programa que pida al usuario una cadena de
 caracteres y la  almacene dinámicamente en memoria*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int tam;
    cout<<"Ingresar el tamaño: ";
    cin>>tam;
    cin.ignore();//omite el salto de linea en el buffer al poner enter
    char *cadena=new char[tam+1];
    cout<<"Ingresar una cadena: ";
    cin.getline(cadena,tam+1);//si encuentra un salto de linea al inicio del buffer no leería nada por eso el cin.ignore(), tam+1 es por caracter nulo.
    cout<<"La cadena ingresada es: "<<cadena;
    delete []cadena;
    return 0; 
}
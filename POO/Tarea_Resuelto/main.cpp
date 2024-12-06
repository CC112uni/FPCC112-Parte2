#include <iostream>
#include "cabecera.h"
using namespace std;

int main(){
    Complejo c1, c2;
    cout<<"| Ingrese el primer complejo (C2): "<<endl;
    c1.Pedir_Valores();
    cout<<"| Ingrese el segundo complejo (C1): "<<endl;
    c2.Pedir_Valores();

    cout<<"| Complejos ingresados: "<<endl;
    cout<<"C1: "; 
    c1.imprimir(); 
    cout<<"C2: ";
    c2.imprimir(); 

    cout<<"|[!] Resultado de la suma (C1+C2): "<<endl;
    Complejo suma;
    suma=c1+c2;
    suma.imprimir();
    
    cout<<"|[!] Resultado de la resta (C1-C2): "<<endl;
    Complejo resta;
    resta=c1-c2;
    resta.imprimir();

    cout<<"|[!] Resultado de la multiplicación (C1*C2): "<<endl;
    Complejo multiplicar;
    multiplicar=c1*c2;
    multiplicar.imprimir();
    
    cout<<"|[!] Resultado de la división (C1/C2): "<<endl;
    Complejo dividir;
    dividir=c1/c2;
    dividir.imprimir();

    Cuaternion cu1, cu2;
    cout<<"| Ingrese el primer cuaternion (Cu1): "<<endl;
    cu1.Pedir_Valores();
    cout<<"| Ingrese el segundo cuaternion (Cu2): "<<endl;
    cu2.Pedir_Valores();

    cout<<"| Cuaterniones ingresados: "<<endl;
    cout<<"Cu1: "; 
    cu1.imprimir(); 
    cout<<"Cu2: ";
    cu2.imprimir(); 

    cout<<"|[!] Resultado de la suma(Cu1+Cu2): "<<endl;
    Cuaternion suma_cuaternion;
    suma_cuaternion=cu1+cu2;
    suma_cuaternion.imprimir();

    cout<<"|[!] Resultado de la resta(Cu1-Cu2): "<<endl;
    Cuaternion resta_cuaternion;
    resta_cuaternion=cu1-cu2;
    resta_cuaternion.imprimir();

    cout<<"|[!] Resultado de la multiplicación (Cu1*Cu2): "<<endl;
    Cuaternion multiplicar_cuaternion;
    multiplicar_cuaternion=cu1*cu2;
    multiplicar_cuaternion.imprimir();

    cout<<"|[!] Resultado de la primera conjugada (Cu1*): "<<endl;
    Cuaternion conjugada_cu1;
    conjugada_cu1=cu1.conjugado();
    conjugada_cu1.imprimir();

    cout<<"|[!] Resultado de la segunda conjugada (Cu2*): "<<endl;
    Cuaternion conjugada_cu2;
    conjugada_cu2=cu2.conjugado();
    conjugada_cu2.imprimir();

    cout<<"|[!] Resultado de la primera norma (|Cu1|): "<<endl;
    cu1.norm();
    cout<<cu1.norma<<endl;

    cout<<"|[!] Resultado de la segunda norma (|Cu2|): "<<endl;
    cu2.norm();
    cout<<cu2.norma<<endl;

    cout<<"|[!] Resultado de la primera inversa (Cu1^{-1}): "<<endl;
    Cuaternion cu1_inversa;
    cu1_inversa=cu1.inversa();
    cu1_inversa.imprimir();

    cout<<"|[!] Resultado de la segunda inversa (Cu2^{-1}): "<<endl;
    Cuaternion cu2_inversa;
    cu2_inversa=cu2.inversa();
    cu2_inversa.imprimir();
}
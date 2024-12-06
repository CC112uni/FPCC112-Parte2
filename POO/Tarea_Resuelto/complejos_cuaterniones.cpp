#include <iostream>
#include "cabecera.h"
#include <cmath>
using namespace std;

Complejo::Complejo(double real, double imaginario):a(real), b(imaginario){
    
} 

void Complejo::Pedir_Valores(){
    cout<<"|> Ingrese el valor a (a+bi): "; 
    cin>>a; cin.ignore();
    cout<<"|> Ingrese el valor b (a+bi): ";
    cin>>b; cin.ignore();
    
}

Complejo Complejo::operator+(Complejo &externo){
    return Complejo(a+externo.a, b+externo.b);
}

Complejo Complejo::operator-(Complejo &externo){
    return Complejo(a-externo.a, b-externo.b);
}

Complejo Complejo::operator*(Complejo &externo){
    return Complejo((a*externo.a-b*externo.b), (a*externo.b+b*externo.a));
}

Complejo Complejo::operator/(Complejo &externo){
    return Complejo((a*externo.a-b*externo.b)/(pow(externo.a,2))+pow((externo.b),2), (a*externo.b+b*externo.a)/(pow(externo.a,2)+pow(externo.b,2)));
}

void Complejo::imprimir(){ 
    if(b<0){
        cout<<a<<" "<<b<<"i"<<endl;
    }else{
        cout<<a<<" + "<<b<<"i"<<endl;
    }
} 

Cuaternion::Cuaternion(double x1, double x2, double x3, double x4): a(x1),b(x2),c(x3),d(x4){
    
}

void Cuaternion::Pedir_Valores(){
    cout<<"|> Ingrese el valor a (a+bi+cj+dk): ";
    cin>>a; cin.ignore();
    cout<<"|> Ingrese el valor b (a+bi+cj+dk): ";
    cin>>b; cin.ignore();
    cout<<"|> Ingrese el valor c (a+bi+cj+dk): ";
    cin>>c; cin.ignore();
    cout<<"|> Ingrese el valor d (a+bi+cj+dk): ";
    cin>>d; cin.ignore();
}

Cuaternion Cuaternion::operator+(Cuaternion &externo){
    return Cuaternion(a+externo.a,b+externo.b,c+externo.c,d+externo.d);
}

Cuaternion Cuaternion::operator-(Cuaternion &externo){
    return Cuaternion(a-externo.a,b-externo.b,c-externo.c,d-externo.d);
}

Cuaternion Cuaternion::operator*(Cuaternion &externo){
    return Cuaternion((a*externo.a-b*externo.b-c*externo.c-d*externo.d),(a*externo.b+b*externo.a+c*externo.d-d*externo.c),(a*externo.c-b*externo.d+c*externo.a+d*externo.b),(a*externo.d+b*externo.c-c*externo.b+d*externo.a));
}

Cuaternion Cuaternion::operator/(double num){
    return Cuaternion(a/num,b/num,c/num,d/num);
}

Cuaternion Cuaternion::conjugado(){
    return Cuaternion(a,-b,-c,-d);
}

void Cuaternion::norm() {
    norma = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2));
}


Cuaternion Cuaternion::inversa(){
    return Cuaternion(a/(pow(norma,2)),-b/(pow(norma,2)),-c/(pow(norma,2)),-d/(pow(norma,2)));
}

void Cuaternion::imprimir(){
    cout<<a<<" + "<<b<<"i"<<" + "<<c<<"j"<<" + "<<d<<"k"<<endl;
}
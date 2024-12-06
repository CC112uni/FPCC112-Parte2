
#ifndef CABECERA_H
#define CABECERA_H

#include <iostream>
using namespace std;

class Complejo {
    private:
        double a; 
        double b;

    public:
        Complejo(double a = 0.0, double b = 0.0);
        Complejo operator+(Complejo &externo); 
        Complejo operator-(Complejo &externo);
        Complejo operator*(Complejo &externo); 
        Complejo operator/(Complejo &externo);

        void Pedir_Valores();
        void imprimir();
};


class Cuaternion {
private:
    double a;
    double b;
    double c;
    double d;
    

public:
    double norma;
    Cuaternion(double w = 0.0, double x = 0.0, double y = 0.0, double z = 0.0);
    Cuaternion operator+(Cuaternion &externo);
    Cuaternion operator-(Cuaternion &externo);
    Cuaternion operator*(Cuaternion &externo);
    Cuaternion operator/(double num);
    Cuaternion conjugado();
    void norm();
    Cuaternion inversa();
    void Pedir_Valores();
    void imprimir(); 
};

#endif
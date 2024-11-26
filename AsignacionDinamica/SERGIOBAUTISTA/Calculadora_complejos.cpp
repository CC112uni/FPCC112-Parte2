#include <iostream>
using namespace std;

struct Complejo{
    float real;
    float imaginario;
}z1,z2,z3;

Complejo suma(Complejo z1, Complejo z2){
    z3.real = z1.real + z2.real;
    z3.imaginario = z1.imaginario + z2.imaginario;
    return z3;
};

Complejo resta(Complejo z1, Complejo z2){
    z3.real = z1.real - z2.real;
    z3.imaginario = z1.imaginario - z2.imaginario;
    return z3;
};

Complejo multiplicacion(Complejo z1, Complejo z2){
    z3.real = z1.real*z2.real - z1.imaginario*z2.imaginario;
    z3.imaginario = z1.real*z2.imaginario + z1.imaginario*z2.real;
    return z3;
};

Complejo division(Complejo z1, Complejo z2){
    z3.real = (z1.real*z2.real + z1.imaginario*z2.imaginario)/(z2.real*z2.real + z2.imaginario*z2.imaginario);
    z3.imaginario = (z1.imaginario*z2.real - z1.real*z2.imaginario)/(z2.real*z2.real + z2.imaginario*z2.imaginario);
    return z3;
}

void datos(){
    cout<<"Ingrese los datos del primer numero:"<<endl;
    cout<<"Parte real: ";
    cin>>z1.real;
    cout<<"Parte imaginaria: ";
    cin>>z1.imaginario;
    cout<<endl;
    cout<<"Ingrese los datos del segundo numero:"<<endl;
    cout<<"Parte real: ";
    cin>>z2.real;
    cout<<"Parte imaginaria: ";
    cin>>z2.imaginario;
}

int main(){

    datos();

    cout<<"Elija una operacion para realizar:"<<endl;
    cout<<"1.Suma"<<endl;
    cout<<"2.Resta"<<endl;
    cout<<"3.Multiplicacion"<<endl;
    cout<<"4.Division"<<endl;

    int eleccion;
    cin>>eleccion;

    switch(eleccion){
        case 1 :
            {Complejo x = suma(z1, z2);
            cout<<"Numeros ingresados:"<<endl;
            cout<<"Primer numero: "<<z1.real<<" + "<<z1.imaginario;
            cout<<"Segundo numero: "<<z2.real<<" + "<<z2.imaginario;
            cout<<"Resultado: "<<z3.real<<" + "<<z3.imaginario;
            }break;
        case 2 :
            {Complejo y = resta(z1, z2);
            cout<<"Numeros ingresados:"<<endl;
            cout<<"Primer numero: "<<z1.real<<" + "<<z1.imaginario;
            cout<<"Segundo numero: "<<z2.real<<" + "<<z2.imaginario;
            cout<<"Resultado: "<<z3.real<<" + "<<z3.imaginario;
            }break;
        case 3 :
            {Complejo m = multiplicacion(z1, z2);
            cout<<"Numeros ingresados:"<<endl;
            cout<<"Primer numero: "<<z1.real<<" + "<<z1.imaginario;
            cout<<"Segundo numero: "<<z2.real<<" + "<<z2.imaginario;
            cout<<"Resultado: "<<z3.real<<" + "<<z3.imaginario;
            }break;
        case 4 :
            {Complejo n = division(z1, z2);
            cout<<"Numeros ingresados:"<<endl;
            cout<<"Primer numero: "<<z1.real<<" + "<<z1.imaginario;
            cout<<"Segundo numero: "<<z2.real<<" + "<<z2.imaginario;
            cout<<"Resultado: "<<z3.real<<" + "<<z3.imaginario;
            }break;
        default:
            cout<<"Opcion no valida"<<endl;
            cin>>eleccion;
        break;
        }
    
    return 0;
}
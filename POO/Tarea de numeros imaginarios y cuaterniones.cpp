#include <iostream>
#include <cmath>
using namespace std;

// Clase para Números Complejos
class Complejo {
private:
    double real, imaginaria;

public:
    Complejo(double r = 0, double i = 0) : real(r), imaginaria(i) {}

    Complejo operator+(const Complejo& otro) const {
        return Complejo(real + otro.real, imaginaria + otro.imaginaria);
    }
    Complejo operator-(const Complejo& otro) const {
        return Complejo(real - otro.real, imaginaria - otro.imaginaria);
    }
    Complejo operator*(const Complejo& otro) const {
        return Complejo(real * otro.real - imaginaria * otro.imaginaria,
                        real * otro.imaginaria + imaginaria * otro.real);
    }
    Complejo operator/(const Complejo& otro) const {
        double denominador = otro.real * otro.real + otro.imaginaria * otro.imaginaria;
        return Complejo((real * otro.real + imaginaria * otro.imaginaria) / denominador,
                        (imaginaria * otro.real - real * otro.imaginaria) / denominador);
    }

    void mostrar() const {
        cout << real << " + " << imaginaria << "i" << endl;
    }
};

// Clase para Cuaterniones
class Cuaternion {
private:
    double a, b, c, d;

public:
    Cuaternion(double _a = 0, double _b = 0, double _c = 0, double _d = 0)
        : a(_a), b(_b), c(_c), d(_d) {}

    Cuaternion operator+(const Cuaternion& otro) const {
        return Cuaternion(a + otro.a, b + otro.b, c + otro.c, d + otro.d);
    }
    Cuaternion operator-(const Cuaternion& otro) const {
        return Cuaternion(a - otro.a, b - otro.b, c - otro.c, d - otro.d);
    }
    Cuaternion operator*(const Cuaternion& otro) const {
        return Cuaternion(
            a * otro.a - b * otro.b - c * otro.c - d * otro.d,
            a * otro.b + b * otro.a + c * otro.d - d * otro.c,
            a * otro.c - b * otro.d + c * otro.a + d * otro.b,
            a * otro.d + b * otro.c - c * otro.b + d * otro.a
        );
    }
    Cuaternion conjugado() const {
        return Cuaternion(a, -b, -c, -d);
    }
    double norma() const {
        return sqrt(a * a + b * b + c * c + d * d);
    }
    Cuaternion inversa() const {
        double normaCuadrada = norma() * norma();
        Cuaternion conj = conjugado();
        return Cuaternion(conj.a / normaCuadrada, conj.b / normaCuadrada,
                           conj.c / normaCuadrada, conj.d / normaCuadrada);
    }

    void mostrar() const {
        cout << a << " + " << b << "i + " << c << "j + " << d << "k" << endl;
    }
};

//Para la función principal
int main() {
    // Demostración de números complejos
    Complejo c1(3, 4), c2(1, 2);
    cout << "Suma de numeros complejos: ";
    (c1 + c2).mostrar();
    cout << "Resta de numeros complejos: ";
    (c1 - c2).mostrar();
    cout << "Multiplicacion de numeros complejos: ";
    (c1 * c2).mostrar();
    cout << "Division de numeros complejos: ";
    (c1 / c2).mostrar();

    // Demostración de cuaterniones
    Cuaternion q1(1, 2, 3, 4), q2(5, 6, 7, 8);
    cout << "\nSuma de cuaterniones: ";
    (q1 + q2).mostrar();
    cout << "Resta de cuaterniones: ";
    (q1 - q2).mostrar();
    cout << "Multiplicacion de cuaterniones: ";
    (q1 * q2).mostrar();
    cout << "Conjugado del primer cuaternion: ";
    q1.conjugado().mostrar();
    cout << "Norma del primer cuaternion: " << q1.norma() << endl;
    cout << "Inversa del primer cuaternion: ";
    q1.inversa().mostrar();

    return 0;
}

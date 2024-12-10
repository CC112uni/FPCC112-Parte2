#include <iostream>
#include <cmath>
using namespace std;


class Complejo {
private:
    double real;
    double imag;

public:
    Complejo(double r = 0.0, double i = 0.0) : real(r), imag(i) {}//constructor o línea de inicialización, serán 0 si no se les pasa valores

    Complejo sumar(const Complejo& s) {// const para indicar que no va a cambiar el objeto s, se pasa por referencia para ahorrar memoria
        return Complejo(real + s.real, imag + s.imag);
    }

    Complejo restar(const Complejo& s) {
        return Complejo(real - s.real, imag - s.imag);
    }

    Complejo multiplicar(const Complejo& s) {
        return Complejo(real * s.real - imag * s.imag, real * s.imag + imag * s.real);
    }

    Complejo dividir(const Complejo& s) {
        double denom = s.real * s.real + s.imag * s.imag;
        if (denom == 0) {
            cout << "Error: División por cero." << endl;
            return Complejo();
        }
        return Complejo(
            (real * s.real + imag * s.imag) / denom,
            (imag * s.real - real * s.imag) / denom
        );
    }

    void imprimir() const {
        cout << real << " + " << imag << "i" << endl;
    }
};


class Cuaternion {
private:
    double a, b, c, d;

public:
    Cuaternion(double w = 0.0, double x = 0.0, double y = 0.0, double z = 0.0)
        : a(w), b(x), c(y), d(z) {}

    Cuaternion sumar(const Cuaternion& s) {
        return Cuaternion(a + s.a, b + s.b, c + s.c, d + s.d);
    }

    Cuaternion restar(const Cuaternion& s) {
        return Cuaternion(a - s.a, b - s.b, c - s.c, d - s.d);
    }

    Cuaternion multiplicar(const Cuaternion& s) {
        return Cuaternion(
            a * s.a - b * s.b - c * s.c - d * s.d,
            a * s.b + b * s.a + c * s.d - d * s.c,
            a * s.c - b * s.d + c * s.a + d * s.b,
            a * s.d + b * s.c - c * s.b + d * s.a
        );
    }

    Cuaternion conjugado() {
        return Cuaternion(a, -b, -c, -d);
    }

    double norma() {
        return sqrt(a * a + b * b + c * c + d * d);
    }

    Cuaternion inversa() {
        double normaCuadrada = a * a + b * b + c * c + d * d;
        if (normaCuadrada == 0) {
            cout << "Error: Inversa no definida para norma cero." << endl;
            return Cuaternion();
        }
        Cuaternion conjugadoCuaternion = conjugado();
        return Cuaternion(
            conjugadoCuaternion.a / normaCuadrada,
            conjugadoCuaternion.b / normaCuadrada,
            conjugadoCuaternion.c / normaCuadrada,
            conjugadoCuaternion.d / normaCuadrada
        );
    }

    void imprimir() const {
        cout << a << " + " << b << "i + " << c << "j + " << d << "k" << endl;
    }
};


int main() {
    Complejo c1(3, 4), c2(1, -2);
    Complejo suma = c1.sumar(c2);
    Complejo resta = c1.restar(c2);
    Complejo multiplicacion = c1.multiplicar(c2);
    Complejo division = c1.dividir(c2);

    cout << "Números Complejos:" << endl;
    cout << "c1: "; c1.imprimir();
    cout << "c2: "; c2.imprimir();
    cout << "Suma: "; suma.imprimir();
    cout << "Resta: "; resta.imprimir();
    cout << "Multiplicación: "; multiplicacion.imprimir();
    cout << "División: "; division.imprimir();

    // Ejemplo de Cuaternion
    Cuaternion q1(1, 2, 3, 4), q2(0, 1, 1, 1);
    Cuaternion qSuma = q1.sumar(q2);
    Cuaternion qResta = q1.restar(q2);
    Cuaternion qMultiplicacion = q1.multiplicar(q2);
    Cuaternion qConjugado = q1.conjugado();
    double qNorma = q1.norma();
    Cuaternion qInversa = q1.inversa();

    cout << "\nCuaterniones:" << endl;
    cout << "q1: "; q1.imprimir();
    cout << "q2: "; q2.imprimir();
    cout << "Suma: "; qSuma.imprimir();
    cout << "Resta: "; qResta.imprimir();
    cout << "Multiplicación: "; qMultiplicacion.imprimir();
    cout << "Conjugado de q1: "; qConjugado.imprimir();
    cout << "Norma de q1: " << qNorma << endl;
    cout << "Inversa de q1: "; qInversa.imprimir();

    return 0;
}


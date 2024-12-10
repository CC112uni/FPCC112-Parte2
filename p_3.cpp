#include <iostream>
#include <cmath>
using namespace std;

// Clase para calcular el factorial de un número
class Factorial {
public:
    static int calcular(int num) {//static es para no crear un objeto en el main Factorial f;               
                                                                                 //int resultado = f.calcular(5)
       int resultado = 1;
        for (int i = 1; i <= num; ++i) {
            resultado *= i;
        }
        return resultado;
    }
};

// Clase para invertir un número entero
class InvertirNumero {
public:
    static int invertir(int num) {//static es para no crear un objeto en el main
        int invertido = 0;
        while (num > 0) {
            invertido = invertido * 10 + (num % 10);
            num=num/ 10;
        }
        return invertido;
    }
};

// Clase para verificar si una palabra o número es palíndrome
class Palindrome {
public:
    static bool esPalindrome(int num) {//static es para no crear un objeto en el main
        int original = num;
        int invertido = InvertirNumero::invertir(num);
        return original == invertido;
    }
};

// Clase para verificar si un número es perfecto
class NumeroPerfecto {
public:
    static bool esPerfecto(int num) {//static es para no crear un objeto en el main
        int sumaDivisores = 0;
        for (int i = 1; i <= num / 2; ++i) {
            if (num % i == 0) {
                sumaDivisores += i;
            }
        }
        return sumaDivisores == num;
    }
};

// Clase para verificar si un número es Armstrong
class NumeroArmstrong {
public:
    static bool esArmstrong(int num) {//static es para no crear un objeto en el main
        int suma = 0, temp = num;
        int digitos = contarDigitos(num);
        while (temp > 0) {
            int digito = temp % 10;
            suma += pow(digito, digitos);
            temp /= 10;
        }
        return suma == num;
    }

private://Todo lo que esté definido aqui solo se puede usar dentro de la clase NumeroArmstrong
    static int contarDigitos(int num) {//static es para no crear un objeto en el main
        int digitos = 0;
        while (num > 0) {
            ++digitos;
            num /= 10;
        }
        return digitos;
    }
};

// Clase para generar la sucesión de Fibonacci
class Fibonacci {
public:
    static void generar(int n) {//static es para no crear un objeto en el main
        int a = 0, b = 1, c;
        cout << a;
        if (n > 1) cout << " " << b;
        for (int i = 3; i <= n; ++i) {
            c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
        cout << endl;
    }
};

int main() {
    // Factorial
    int num = 5;
    cout << "Factorial de " << num << " es: " << Factorial::calcular(num) << endl;//Factorial::calcular(num) significa calcular pertenece a la clase factorial

    // Invertir número
    num = 1234;
    cout << "Número invertido de " << num << " es: " << InvertirNumero::invertir(num) << endl;

    // Palíndrome
    num = 3223;
    cout << num << (Palindrome::esPalindrome(num) ? " es" : " no es") << " palíndrome." << endl;// (Palindrome::esPalindrome(num) ? " es" : " no es") significa si es verdadero se ejecuta la frase inmediata y si no la siguiente

    // Número perfecto
    num = 6;
    cout << num << (NumeroPerfecto::esPerfecto(num) ? " es" : " no es") << " un número perfecto." << endl;

    // Número Armstrong
    num = 153;
    cout << num << (NumeroArmstrong::esArmstrong(num) ? " es" : " no es") << " un número Armstrong." << endl;

    // Fibonacci
    int n = 10;
    cout << "Los primeros " << n << " términos de Fibonacci son: ";
    Fibonacci::generar(n);

    return 0;
}

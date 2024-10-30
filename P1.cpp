
1 Solicita al usuario un entero y crea un arreglo dinámico de ese tamaño.Luego, llena el arreglo con números ingresados por el usuario.

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
  
  int n;
  cout << " Ingresa el tamaño del arreglo dinámico ";

  do { 
    cin >>n;
    if (n <= 0)
      cout << " Ingrese un número positivo " << endl;
  }while (n <= 0);
  
  double *array = new double[n];

  for (int i = 0; i < n; i++) {
    cout << i + 1 << " : ";
    cin >> array[i];
  }
  
  cout  << "[";
  for (int i = 0; i < n; i++) {
    cout << setw(3) << array[i];
  }
  cout << " ]" <<endl;
  delete [] array;
  return 0;
}

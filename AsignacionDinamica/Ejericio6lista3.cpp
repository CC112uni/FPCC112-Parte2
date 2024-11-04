#include <iostream>
using namespace std;

void merge(int A[], int start, int mid, int end) {
    int p = start, q = mid + 1;
    int Arr[end - start + 1], k = 0;
    for (int i = start; i <= end; i++) {
        if (p > mid)
            Arr[k++] = A[q++];
        else if (q > end)
            Arr[k++] = A[p++];
        else if (A[p] < A[q])
            Arr[k++] = A[p++];
        else
            Arr[k++] = A[q++];
    }
    for (int i = 0; i < k; i++) {
        A[start++] = Arr[i];
    }
}

void mergeSort(int A[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(A, start, mid);
        mergeSort(A, mid + 1, end);
        merge(A, start, mid, end);
    }
}

int main() {
    int tam;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tam;

    int* arr = new int[tam];

    cout << "Ingrese los elementos del arreglo: "<<"\n";
    for (int i = 0; i < tam; i++) {
        cin >> arr[i];
    }
cout << "Arreglo sin ordenar: ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
  
    mergeSort(arr, 0, tam - 1);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

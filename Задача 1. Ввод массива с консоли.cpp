#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int size;

    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size]; 

    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Введённый массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; 
}
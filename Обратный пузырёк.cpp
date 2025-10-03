#include <iostream>
using namespace std; 

int main()
{
    setlocale(LC_ALL, "Russian");

    int arr[10] = { 34, 12, 45, 2, 67, 23, 90, 11, 5, 56 };
    int n = 10;

    cout << "Массив до сортировки: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    cout << "Массив после сортировки: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

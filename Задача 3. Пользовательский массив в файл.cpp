#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, ""); 

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* arr = new int[n]; 

    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    ofstream fout("out.txt");
    if (!fout.is_open()) {
        cout << "Ошибка при открытии файла!" << endl;
        delete[] arr;
        return 1;
    }

    fout << n << endl;

    for (int i = n - 1; i >= 0; i--) {
        fout << arr[i];
        if (i > 0) fout << " ";
    }

    fout.close();
    cout << "Массив записан в файл out.txt" << endl;

    delete[] arr; 
    return 0;
}
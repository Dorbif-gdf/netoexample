#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("in.txt"); 

    if (!fin.is_open()) { 
        cout << "Ошибка: не удалось открыть файл!" << endl;
        return 1;
    }

    int n;
    fin >> n; 

    int* arr = new int[n]; 

    for (int i = 0; i < n; ++i) {
        fin >> arr[i];
    }

    fin.close(); 

    
    for (int i = n - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    delete[] arr; 
    return 0;
}
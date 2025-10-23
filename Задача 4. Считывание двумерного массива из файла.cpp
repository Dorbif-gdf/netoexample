#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("in.txt"); 
    if (!fin) {
        cout << "Не удалось открыть файл in.txt" << endl;
        return 1;
    }

    int rows, cols;
    fin >> rows >> cols; 

    int** arr = new int* [rows]; 
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            fin >> arr[i][j]; 
        }
    }

    fin.close(); 

    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
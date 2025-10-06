#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;      
    if (n == 1) return 1;    
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    setlocale(LC_ALL, "Russian");

    int count;
    cout << "Введите число: ";
    cin >> count;

    cout << "Числа Фибоначчи: ";
    for (int i = 0; i < count; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
}
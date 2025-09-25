#include <iostream>
using namespace std; 

int main()
{
    setlocale(LC_ALL, "Russian");

    int number = 0; 

    cout << "Введите целое число: ";
    cin >> number; 

    for (int a = 1; a <= 10; a++) {
        cout << number << " x " << a << " = " << number * a << endl;
    }
}

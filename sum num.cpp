#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int number = 0; 
    int sum = 0;

    cout << "Введите целое число: "; 
    cin >> number; 

    while (number > 0) {
        int lastnum = number % 10;   
        sum = sum + lastnum;         
        number = number / 10;          
    }

    cout << "Сумма цифр: " << sum;
}

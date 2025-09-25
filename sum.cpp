#include <iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "Russian");

    int number;      
    int sum = 0;     

    cout << "Введите целое число или число '0', чтобы закончить:";
    cin >> number;

    while (number != 0) { 
        sum += number;    
        cout << "Введите целое число или число '0', чтобы закончить:";
        cin >> number;
    }

    cout << "Сумма: " << sum;
}
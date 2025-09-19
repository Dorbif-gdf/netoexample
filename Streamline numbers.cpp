#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int a, b, c;

    cout << "Введите 3 целых числа: ";
    cin >> a >> b >> c;
    int max = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    int min = (a < b ? (a < c ? a : c) : (b < c ? b : c));
    int mid = a + b + c - max - min;
    cout << max << " " << mid << " " << min;
}
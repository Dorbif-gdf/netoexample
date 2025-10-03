#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

    const int size = 10;
    int arr[size] = { 5, 3, 6, 1, 9, 8, 7, 4, 10, 2 };

    cout << "Массив: ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    int minelement = arr[0];
    int maxelement = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minelement)
            minelement = arr[i];
        if (arr[i] > maxelement)
            maxelement = arr[i];
    }

    cout << "Минимальный элемент: " << minelement << endl;
    cout << "Максимальный элемент: " << maxelement << endl;

}

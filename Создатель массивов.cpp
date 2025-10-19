#include <iostream>
using namespace std;

double* create_array(int size)
{
    double* arr = new double[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }

    return arr;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    double* arr = create_array(size);

    cout << "Массив: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

}
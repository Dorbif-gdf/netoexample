#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0; i < size; i++)
    {
        if (i == size - 1) 
            cout << arr[i];
        else
            cout << arr[i] << ", ";
    }
}

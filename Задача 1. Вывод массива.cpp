#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arr2[] = { 6, 5, 4, 8 };
    int arr3[] = { 1, 4, 3, 7, 5 };

    print(arr1, 9);
    print(arr2, 4);
    print(arr3, 5);

}
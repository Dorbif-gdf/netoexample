#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

    int arr[3][6] = {
        {12, 5, 8, 15, 3, 9},
        {20, 7, 14, 6, 11, 2},
        {18, 25, 4, 10, 16, 30}
    };

    cout << "Массив:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arr[i][j] << "\t"; 
        }
        cout << endl; 
    }

    int minRow = 0, minCol = 0;
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            if (arr[i][j] < arr[minRow][minCol]) {
                minRow = i;
                minCol = j;
            }
            if (arr[i][j] > arr[maxRow][maxCol]) {
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Индекс минимального элемента: " << minRow << " " << minCol << endl;
    cout << "Индекс максимального элемента: " << maxRow << " " << maxCol << endl;

}

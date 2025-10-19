#include <iostream>
using namespace std;

int** create_two_dim_array(int rows, int cols)
{
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols]; 
    }
    return arr;
}

void fill_two_dim_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
}

void print_two_dim_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t"; 
        }
        cout << endl;
    }
}

void delete_two_dim_array(int** arr, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i]; 
    }
    delete[] arr; 
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    int** table = create_two_dim_array(rows, cols);
    fill_two_dim_array(table, rows, cols);

    cout << "Таблица умножения:" << endl;
    print_two_dim_array(table, rows, cols);

    delete_two_dim_array(table, rows);

}
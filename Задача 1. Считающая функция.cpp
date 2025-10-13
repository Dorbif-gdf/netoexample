#include <iostream>
using namespace std; 

void counting_function() {
    static int counter = 0;  
    counter++;                
    cout << "Количество вызовов функции counting_function(): " << counter << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}

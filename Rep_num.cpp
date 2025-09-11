#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int num; 

    std::cout << "Введите любое число: ";
    std::cin >> num; 
    std::cout << num; 
}

#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str; 

    std::cout << "Введите слово: ";
    std::cin >> str;
    std::cout << str;
}

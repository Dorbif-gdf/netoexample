#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);   

    string name, surname;

    cout << "Введите имя: ";
    cin >> name;

    cout << "Введите фамилию: ";
    cin >> surname;

    string greeting = "Здравствуйте, " + name + " " + surname + "!";
    cout << greeting << endl;
}
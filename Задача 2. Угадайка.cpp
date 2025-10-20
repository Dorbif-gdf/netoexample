#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string secret = "малина"; 
    string guess;

    do {
        cout << "Угадайте слово: ";
        cin >> guess;

        if (guess != secret) {
            cout << "Неправильно" << endl;
        }
    } while (guess != secret);

    cout << "Правильно! Вы победили! Загаданное слово — " << secret << endl;
}

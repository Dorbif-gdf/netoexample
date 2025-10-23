#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleOutputCP(65001); 
    SetConsoleCP(65001);      

    ifstream file("in.txt");

    if (!file.is_open()) { 
        cerr << "Не удалось открыть файл!" << endl;
        return 1;
    }

    string word;

    while (file >> word) {
        cout << word << endl; 
    }

    file.close(); 
    return 0;
}
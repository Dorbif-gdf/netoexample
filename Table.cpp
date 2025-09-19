#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    bool A, B;

    cout << "Оператор: ||\n";

    A = true;  B = true;
    cout << boolalpha << A << "\t" << B << "\t" << (A || B) << endl;

    A = false;  B = true;
    cout << boolalpha << A << "\t" << B << "\t" << (A || B) << endl;

    A = true; B = false;
    cout << boolalpha << A << "\t" << B << "\t" << (A || B) << endl;

    A = false; B = false;
    cout << boolalpha << A << "\t" << B << "\t" << (A || B) << endl;


    cout << "\nОператор: &&\n";

    A = true;  B = true;
    cout << boolalpha << A << "\t" << B << "\t" << (A && B) << endl;

    A = false;  B = true;
    cout << boolalpha << A << "\t" << B << "\t" << (A && B) << endl;

    A = true; B = false;
    cout << boolalpha << A << "\t" << B << "\t" << (A && B) << endl;

    A = false; B = false;
    cout << boolalpha << A << "\t" << B << "\t" << (A && B) << endl;
}
#include <iostream>
using namespace std; 

int powerFunc(int value, int power) {
    if (power == 0)
        return 1;               
    return value * powerFunc(value, power - 1);
}

void printPower(int value, int power) {
    int result = powerFunc(value, power);
    cout << value << " в степени " << power << " = " << result << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    printPower(5, 2);
    printPower(3, 3);
    printPower(4, 4);

}
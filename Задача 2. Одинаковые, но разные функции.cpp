#include <iostream>
using namespace std;

namespace addition {
    int calc(int x, int y) {
        return x + y;
    }
}

namespace Subtraction {
    int calc(int x, int y) {
        return x - y;
    }
}

namespace multiplication {
    int calc(int x, int y) {
        return x * y;
    }
}

namespace division {
    int calc(int x, int y) {
        return y != 0 ? x / y : 0; 
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int x = 6;
    int y = 9;

    cout << "x = " << x << ", y = " << y << endl;
    cout << "Сложение: " << addition::calc(x, y) << endl;
    cout << "Вычитание: " << Subtraction::calc(x, y) << endl;
    cout << "Умножение: " << multiplication::calc(x, y) << endl;
    cout << "Деление: " << division::calc(x, y) << endl;
}
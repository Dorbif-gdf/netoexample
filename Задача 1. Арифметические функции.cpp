#include <iostream>
using namespace std;

int sum(int a, int b) 
{
    return a + b;
}

int diff(int a, int b) 
{
    return a - b;
}

int multiplication(int a, int b) 
{
    return a * b;
}

double division(int a, int b) 
{
    return static_cast<double>(a) / b; 
}

int main()
{
    int a = 5, b = 10;

    int s = sum(a, b);
    int dif = diff(a, b);
    int mult = multiplication(a, b);
    double div = division(a, b);

    cout << a << " + " << b << " = " << s << endl;
    cout << a << " - " << b << " = " << dif << endl;
    cout << a << " * " << b << " = " << mult << endl;
    cout << a << " / " << b << " = " << div << endl;
}

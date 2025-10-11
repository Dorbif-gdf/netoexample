#include <iostream>
using namespace std;

int main()
{
    int i = 42;
    short s = -15;
    long l = 123456;
    long long ll = 9876543210;
    float f = 3.14f;
    double d = -27.089;
    long double ld = 12345.6789012345L;
    bool b = true;

    cout << "int: " << ' ' << &i << ' ' << sizeof(i) << endl; 
    cout << "short: " << ' ' << &s << ' ' << sizeof(s) << endl;
    cout << "long: " << ' ' << &l << ' ' << sizeof(l) << endl;
    cout << "long long: " << ' ' << &ll << ' ' << sizeof(ll) << endl;
    cout << "float: " << ' ' << &f << ' ' << sizeof(f) << endl;
    cout << "double: " << ' ' << &d << ' ' << sizeof(d) << endl;
    cout << "long double: " << ' ' << &ld << ' ' << sizeof(ld) << endl;
    cout << "bool: " << ' ' << &b << ' ' << sizeof(b) << endl;
}

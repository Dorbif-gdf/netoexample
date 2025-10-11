#include <iostream>
using namespace std; 


void swap(int& x, int& y) {
	x = x + y;  
	y = x - y;  
	x = x - y;  
}

int main()
{
	int a = 5, b = 8;

	cout << "a = " << a << ", b = " << b << endl;

	swap(a, b); 

	cout << "a = " << a << ", b = " << b << endl;


}


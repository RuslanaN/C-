#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std;

int main() {
	
    Complex a(2, 7);
    Complex b(3, 4);
    Complex c;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << '\n' << endl;

    cout << "S" << a + b << endl;
    cout << "D" << a - b << endl;
    cout << "P" << a * b << endl;

    cout << a << " is ";
    if ( a != b ) {
    	cout << "not ";
    }
    cout << "equal to " << b << endl;

    cout << a << " is ";
    if ( a != c ) {
    	cout << "not ";
    }
    cout << "equal to " << c << endl;

    return 0;
}
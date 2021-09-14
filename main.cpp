//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x;
	cout << "x eingeben: ";
	cin >> x;
	cout << " x = " << x << '\n';
	cout << " fabs(x) = " << fabs(x) << '\n';
	cout << " sqrt(x) = " << sqrt(x) << '\n';
	cout << " sin(x) = " << sin(x) << '\n'; // Argument von sin() im Bogenmaß!
	cout << " exp(x) = " << exp(x) << '\n';
	cout << " log(x) = " << log(x) << '\n'; // log() ist der natürliche Logarithmus

    system("pause");
}

#include <iostream>

using namespace std;

void main() {

	double a, z1, z2;

	cout << "Enter a ";

	cin >> a;

	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2));

	z2 = 2 * sin(a);

	cout << "z1 = " << z1 << endl << "z2 = " << z2 << endl;

}
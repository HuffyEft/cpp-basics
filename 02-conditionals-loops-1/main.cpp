#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void printer(double, double);

int main() {
	double a, b, c, xS, xF, dx, F;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "xS = ";
	cin >> xS;
	cout << "xF = ";
	cin >> xF;
	cout << "dx = ";
	cin >> dx;
	cout << string(33, '-') << endl << "|" << setw(8) << "X" << setw(8) << "|"
		<< setw(8) << "F" << setw(8) << "|" << endl;

	if (dx <= 0) {
		cout << "Invalid dx";
	}
	else if (xS > xF) {
		cout << "Invalid xf";
	}
	else {
		int i = xS;
		for (i; i <= xF; i = i + dx) {
			if (a < 0 && (c != 0)) {
				F = a * pow(i, 2) + (b * i) + c;
			}
			else if (a > 0 && c == 0) {
				F = (-a / (i - c));
			}
			else {
				F = a * (i + c);
			}
			printer(xS, F);
		}
		cout << string(33, '-');
	}
}

void printer(double x, double F) {
	cout << string(33, '-') << endl;
	cout << "|" << setw(8) << x << setw(8) << "|"
		<< setw(8) << F << setw(8) << "|" << endl;
}
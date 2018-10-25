#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void print(double, double);
bool isReal;

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
		if ((static_cast<int>(a) & (static_cast<int>(b) | static_cast<int>(c))) != 0) {
			isReal = true;
		}
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
			print(xS, F);
		}
		cout << string(33, '-');
	}
}

void print(double x, double F) {
	if (isReal) {
		F = static_cast<int>(F);
	}
	cout << string(33, '_') << endl
		<< "|" << setw(8) << x << setw(8) << "|"
		<< setw(8) << F << setw(8) << "|" << endl;
}
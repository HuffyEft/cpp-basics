#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	double a, b, c, xS, xF, dx, F;
	cout << "Enter a, b, c, xS, xF, dx" << endl;
	cin >> a >> b >> c >> xS >> xF >> dx;
	cout << string(33, '-') << endl << "|" << setw(8) << "X" << setw(8) << "|"
		<< setw(8) << "F" << setw(8) << "|" << endl;

	if (dx <= 0) {
		cout << "Invalid dx";
	}
	else if (xS > xF) {
		cout << "Invalid xf";
	}
	else {
		for (int i = xS; i <= xF; i = i + dx) {
			if (a < 0 && (c != 0)) {
				F = a * pow(i, 2) + (b * i) + c;
			}
			else if (a > 0 && c == 0) {
				if ((i - c) == 0) {
					cout << "division by 0\n";
					continue;
				}
				F = (-a / (i - c));
			}
			else {
				F = a * (i + c);
			}
			if ((static_cast<int>(a) & (static_cast<int>(b) | static_cast<int>(c))) != 0) {
				F = static_cast<int>(F);
			}
			cout << string(33, '_') << endl
				<< "|" << setw(8) << xS << setw(8) << "|"
				<< setw(8) << F << setw(8) << "|" << endl;
		}
		cout << string(33, '-');
	}
}
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(const double x);
double fact(int i);

int main() {
	double yFirst, yLast, result;
	int n;

	cout << "Enter first y: "; cin >> yFirst;
	cout << "Enter last y: "; cin >> yLast;
	cout << "Enter number of segments: "; cin >> n;

	cout << fixed;
	cout << "---------------------\n";
	cout << "|" << setw(8) << "y"		<< " |"
				<< setw(8) << "result"	<< " |";
	cout << "\n---------------------\n";

	double d = (yLast - yFirst) / n * 1.;
	for (double y = yFirst; y <= yLast; y += d) {
		result = f(1 + pow(y, 2)) + pow(f(f(1.) + pow(f(y * y), 2)), 2);

		cout << "|" << setw(8) << setprecision(5) << y		<< " |"
					 << result << " |\n";

	}

	return 0;
}
double f(const double x) {
	if (abs(x) >= 1)
		return cos(x / 2) / (1 + pow(sin(x), 2));
	else {
		double Sum = 0;
		for (int i = 0; i <= 6; i++) {
			Sum += pow(x, 3 * i) / fact(2 * i);
		}

		return Sum;
	}
}

double fact(int i) {
	if (i == 0 || i == 1) return 1;
	else return i * fact(i - 1);
}
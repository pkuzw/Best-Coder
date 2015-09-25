#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getAbs(double x) {
	return abs(x);
}

int main() {
	double x = 0;
	while (cin >> x) {
		cout << fixed << setprecision(2) << getAbs(x) << endl;
	}
	return 0;
}
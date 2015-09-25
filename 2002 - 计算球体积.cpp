#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.1415927
using namespace std;

double getBallVol(double r) {
	double vol = PI * pow(r, 3) * 4 / 3;
	return vol;
}

int main() {
	double radius = 0;
	while (cin >> radius) {
		double vol = getBallVol(radius);
		cout << fixed << setprecision(3) << vol << endl;
	}
	return 0;
}
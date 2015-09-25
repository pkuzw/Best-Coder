#include <iostream>
#include <cmath>
#include <iomanip>	//	setprecision(n)
using namespace std;

double getDist(double x1, double y1, double x2, double y2) {
	double rslt = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return rslt;
}

int main() {
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	while (cin >> x1 >> y1 >> x2 >> y2) {
		double rslt = getDist(x1, y1, x2, y2);
		cout << fixed << setprecision(2) << rslt << endl;	//	fixed��������С�����λ����setprecision(2)��ʾ��ȷ��С�����2λ
	}
	return 0;
}
#include <iostream>
using namespace std;

// wrong answer. 找不到错在哪里。

long long getSqua(const int& m, const int& n) {
	long long squa_sum = 0;
	for (int i = m; i <= n; i++) {
		if (i % 2 == 0) {
			long long tmp = pow((double)i, 2);
			squa_sum += tmp;
		}
	}
	return squa_sum;
}

long long getCube(const int& m, const int& n) {
	long long cub_sum = 0;
	for (int i = m; i <= n; i++) {
		if (i % 2) {
			long long tmp = pow((double)i, 3);
			cub_sum += tmp;
		}
	}
	return cub_sum;
}

int main() {
	int m = 0, n = 0;
	while (cin >> m >> n) {
		long long x = getSqua(m, n);
		long long y = getCube(m, n);
		cout << x << " " << y << endl;
	}
	return 0;
}
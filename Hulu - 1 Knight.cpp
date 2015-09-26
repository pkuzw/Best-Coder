#include <vector>
#include <iostream>

using namespace std;

struct offset {
	int dx;
	int dy;
};

int getValidGrid(int n, int m, vector<offset> ofs) {
	return 0;
}
int main() {
	int n = 0, m = 0;
	cin >> n >> m;
	int l = 0;
	cin >> l;
	vector<offset> ofs;
	while (l--) {
		offset of;
		cin >> of.dx >> of.dy;
		ofs.push_back(of);
	}
	int rslt = getValidGrid(n, m, ofs);
	return 0;
}
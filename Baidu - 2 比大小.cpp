#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int getRank(string str, int start) {
	string tmp = str.substr(start);
	string sorted_tmp = tmp;
	sort(sorted_tmp.begin(), sorted_tmp.end());
	for (int i = 0; i != sorted_tmp.size(); i++) {
		if (sorted_tmp[i] == tmp[0])	return i;
	}
	return 0;
}

int helper(string str) {

	int base[12] = {0};
	base[0] = 1;
	for (int i = 1; i != 12; i++) {
		base[i] = i * base[i - 1];
	}
	int rslt = 0;
	for (int i = 0; i != str.size(); i++) {
		int n = getRank(str, i);
		n *= base[11 - i];
		rslt += n;
	}
	return rslt + 1;
}

int main() {
	int n = 0;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		int rslt = helper(str);
		cout << rslt << endl;
	}
	return 0;
}
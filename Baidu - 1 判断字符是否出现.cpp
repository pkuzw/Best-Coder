#include <string>
#include <map>
#include <iostream>
using namespace std;

int helper(string a, string b) {
	map<string, int> ht;
	for (int i = 0; i != a.size(); i++) {
		if ((int)a[i] >= 0)	ht[a.substr(i, 1)]++;
		else {
			ht[a.substr(i, 2)]++;
			i++;
		}
	}
	for (int i = 0; i != b.size(); i++) {
		if ((int)b[i] >= 0) {
			if (ht.find(b.substr(i, 1)) != ht.end() && ht[b.substr(i, 1)] > 0)	ht[b.substr(i, 1)]--;
			else return 0;
		}
		else {
			if (ht.find(b.substr(i, 2)) != ht.end() && ht[b.substr(i, 2)] > 0){
				ht[b.substr(i, 2)]--;
				i++;
			}
			else return 0;
		}
	}
	return 1;
}

int main() {
	string a, b;
	cin >> a >> b;
	cout << helper(a, b) << endl;
	return 0;
}
/*
aabc我ad是一个中国的中国人ddesc
abcde中国中
*/

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

struct evil {
	long long hp;
	long long dmg;
};

struct myclass {
	bool operator() (evil a, evil b) {
		double x = double(a.dmg) / double(a.hp);
		double y = double(b.dmg) / double(b.hp);
		return x >= y;
	}
}myobj;

long long getDmg(vector<evil> evils) {
	sort(evils.begin(), evils.end(), myobj);
	vector<long long> dmgs;
	long long total_dmg = 0;
	for (int i = evils.size() - 1; i >= 0; i--) {
		total_dmg += evils[i].dmg;
		dmgs.push_back(total_dmg);
	}
	vector<long long> hps;
	long long total_hp = 0;
	for (int i = 0; i != evils.size(); i++) {
		total_hp += evils[i].hp;
		hps.push_back(total_hp);
	}
	long long rslt = 0;
	for (int i = 0; i != evils.size(); i++) {
		rslt += hps[i] * evils[i].dmg;
//		rslt += evils[i].hp * dmgs[evils.size() - 1 - i];
	}
	return rslt;
}

int main() {
	int case_num = 0;
	cin >> case_num;
	while (case_num--) {
		int evil_num = 0;
		cin >> evil_num;
		vector<evil> evils;
		for (int i = 0; i != evil_num; i++) {
			evil e;
			cin >> e.hp >> e.dmg;
			evils.push_back(e);
		}
		long long rslt = getDmg(evils);
		cout << rslt << endl;
	}
	return 0;
}
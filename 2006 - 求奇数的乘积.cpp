#include <iostream>
#include <vector>
using namespace std;

long long getMulti(const vector<int>& nums) {
	long long rslt = 1;
	for (int i = 0; i != nums.size(); i++) {
		if (nums[i] % 2)	rslt *= nums[i];
	}
	return rslt;
}

int main() {
	int n = 0;	
	while (cin >> n) {
		vector<int> nums;
		for (int i = 0; i != n; i++) {
			int m = 0;
			cin >> m;
			nums.push_back(m);
		}
		long long rslt = getMulti(nums);
		cout << rslt << endl;
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

string getDegree(int grade) {
	if (grade < 0 || grade > 100)	return "Score is error!";
	else if (grade < 60 && grade >= 0)	return "E";
	else if (grade < 70 && grade >= 60)	return "D";
	else if (grade < 80 && grade >= 70)	return "C";
	else if (grade < 90 && grade >= 80)	return "B";
	else	return "A";
}

int main() {
	int grade = 0;
	while (cin >> grade) {
		cout << getDegree(grade) << endl;
	}
	return 0;
}
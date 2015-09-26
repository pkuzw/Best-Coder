#include <map>
#include <vector>
#include <iostream>
using namespace std;

struct rainFall {
	unsigned left;
	unsigned right;
	unsigned rf;
};

vector<long long> getRainFall(vector<rainFall> rain, vector<int> rooms) {
	map<int, long long> room_rain;
	for (int i = 0; i != rooms.size(); i++)	room_rain.insert(make_pair(rooms[i], 0));
	for (int i = 0; i != rain.size(); i++) {
		for (map<int, long long>::iterator iter = room_rain.begin(); iter != room_rain.end(); iter++) {
			if (iter->first <= rain[i].right && iter->first >= rain[i].left)		iter->second += rain[i].rf;
		}
	}
	vector<long long> rslt;
	for (map<int, long long>::iterator iter = room_rain.begin(); iter != room_rain.end(); iter++) {
		rslt.push_back(iter->second);
	}
	return rslt;
}

int main() {
	int room_num = 0;
	cin >> room_num;
	vector<int> rooms;
	while (room_num--) {
		int room = 0;
		cin >> room;
		rooms.push_back(room);
	}
	int record_num = 0;
	cin >> record_num;
	vector<rainFall> rain_falls;
	while (record_num--) {
		rainFall rain_fall;
		cin >> rain_fall.left >> rain_fall.right >> rain_fall.rf;
		rain_falls.push_back(rain_fall);
	}
	vector<long long> rslt = getRainFall(rain_falls, rooms);
	for (int i = 0; i != rslt.size(); i++)
		cout << rslt[i] << endl;
	return 0;
}
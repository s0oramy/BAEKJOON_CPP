#include <iostream>
#include <vector>
using namespace std;

int main() {
	int max = 0, now =  0, index = 0;
	vector<int>list(10);
	for (int i = 0; i < 9; i++) {
		cin >> list[i];
		now = list[i];
		if (max < now) {
			max = now;
			index = i + 1;
		}
	}
	cout << max << endl;
	cout << index << endl;
	return 0;
}
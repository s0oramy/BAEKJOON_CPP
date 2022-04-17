#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int min = 1000000;
	int max = -1000000;

	vector<int>list(1000001);
	for (int i = 0; i < n; i++) {
		cin >> list[i];
		if (min > list[i]) min = list[i];
		if (max < list[i]) max = list[i];
	}
	cout << min << ' ' << max;
	return 0;
}
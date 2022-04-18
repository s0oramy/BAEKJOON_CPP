#include <iostream>
using namespace std;

int main() {
	int count;
	int sum = 0;
	cin >> count;

	string nums;
	cin >> nums;

	for (int i = 0; i < count; i++) {
		sum += nums[i] - 48;
	}
	cout << sum << endl;
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int n;
	int count = 0;

	int rest[42] = {};
	for (int i = 0; i < 10; i++) {
		cin >> n;
		rest[n % 42]++;
	}

	for (int j = 0; j < 42; j++) {
		if (rest[j] != 0)
			count += 1;
	}
	cout << count << endl;
	return 0;
}
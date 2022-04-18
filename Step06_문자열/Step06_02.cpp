#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;

	int sum = 0;
	char ch;

	for (int i = 0; i < count; i++) {
		cin >> ch;
		sum += ch - 48;
	}
	cout << sum << endl;
	return 0;
}
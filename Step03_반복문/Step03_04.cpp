#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t, a, b;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}
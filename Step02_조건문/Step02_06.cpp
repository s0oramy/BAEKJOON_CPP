#include <iostream>
using namespace std;

int main() {
	int h, m, t, temp;
	cin >> h >> m;
	cin >> t;
	
	h += t / 60;
	m += t % 60;

	if (m >= 60) {
		h += 1;
		m -= 60;
	}
	if (h >= 24) {
		h -= 24;
	}

	cout << h << ' ' << m << endl;

	return 0;
}
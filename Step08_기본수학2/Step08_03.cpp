#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;

	while (true) {
		if (n == 1) return 0;

		else
			for (int i = 2; i <= n; i++) {
				if (n % i == 0) {
					cout << i << endl;
					n = n / i;
					break;
				}	
			}
	}
	return 0;
}
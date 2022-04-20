#include <iostream>
using namespace std;


int main() {
	int m, n;
	cin >> m >> n;

	int sum = 0;
	int count = 0;
	int min = -1;   //-1로 초기화하는 것이 핵심!
	
	for (int i = m; i <= n; i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) count++;
		}
		if (count == 2) {
			sum += i;
			if (min == -1)
				min = i;
		}		
	}
	if (min == -1)
		cout << -1 << endl;
	else
		cout << sum << endl << min << endl;

	return 0;
}
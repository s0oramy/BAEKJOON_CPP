#include <iostream>
using namespace std;

int main() {
	int init, n;
	int count = 0;
	cin >> init;

	n = init;

	do {
		// n에 대해 반복하므로 연산된 값도 N으로 덮어써준다. 
		n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;  // 마지막 % 10의 의미 잘 이해할 것
		count++;
	} while (init != n);

	cout << count << endl;
	return 0;
}
#include <iostream>
using namespace std;

int fibo(int a) {
	if (a == 0)
		return 0;

	else if (a == 1)
		return 1;

	else
		return fibo(a - 2) + fibo(a - 1);
}

int main() {
	int n;
	cin >> n;
	cout << fibo(n) << endl;

	return 0;
}
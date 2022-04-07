#include <iostream>
using namespace std;

int main(){
	int n, x, s;
	cin >> n >> x;

	for (int i = 1; i <= n; i++) {
		cin >> s;
		if (s < x) {
			cout << s << ' ';
		}
	}
	return 0;
}
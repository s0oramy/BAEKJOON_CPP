#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int repeat = 0;
		string s;

		cin >> repeat;
		cin >> s;
		
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < repeat; k++)
				cout << s[j];
		}
		cout << '\n';
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	int final, score;
	string str = " ";

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> str;

		final = 0;
		score = 0;

		for (int k = 0; k < str.length(); k++) {
			if (str[k] == 'O') {
				score++;
				final += score;
			}
			else score = 0;
		}
		cout << final << endl;
		str = "";
	}
	return 0;
}
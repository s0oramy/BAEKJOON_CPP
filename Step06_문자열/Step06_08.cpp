#include <iostream>
#include <string>
using namespace std;

int main(){
	int alpha[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	int time = 0;

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); ++i) {
		int index = s[i] - 65;            // 아스키코드 이용하여 풀 것
		time += alpha[index];
	}

	cout << time << endl;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 1;

	string str;
	getline(cin, str);   // getline(cin, s) : 띄어쓰기 포함된 문자열을 받을 때는 getline 사용

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			count++;
	}

	if (str[0] == ' ')  //맨 앞의 공백
		count--;

	if (str[str.length() - 1] == ' ')  //맨 뒤의 공백
		count--;

	cout << count << endl;
	return 0;
}
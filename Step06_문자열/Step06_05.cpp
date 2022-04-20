#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), (int(*)(int))toupper);   // 입력문자 모두 대문자로 바꾸기

	int alpha[26] = {};
	int max = 0, index = 0, count = 0;

	for (int i = 0; i < str.length(); i++) {    // 입력문자 알파벳별로 카운팅
		alpha[str[i] - 'A']++;                  // 아스키코드를 이용해 배열에 저장하는 방법
	}
	
	for (int i = 0; i < 26; i++) {              //배열 안에서 max 값과 인덱스 구하기 
		if (max < alpha[i]) {
            count = 0;
			max = alpha[i];
			index = i;
		}
        if (max == alpha[i]) count ++;         //max와 배열 값이 같으면 +1
	}


	if (count > 1)                             // 같은 경우가 여러개일 경우 ? 출력
		cout << "?" << endl;
	else                                       // 아니라면 65를 더해 원래 대문자로 출력
		cout << (char)(index + 65) << endl;

	return 0;
}
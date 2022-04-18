#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int count = 0;
	vector<string> croatia = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

	string word;
	cin >> word;

	for (int i = 0; i < croatia.size(); i++) {
		while (true) {
			int index = word.find(croatia[i]);

			if (index == string::npos)
				break;

			word.replace(index, croatia[i].length(), "*");   // replace 함수: 문자열.replace(시작 위치, 길이, 치환 문자열)
		}
	}
	count = word.length();
	cout << count << endl;
	
	return 0;
}
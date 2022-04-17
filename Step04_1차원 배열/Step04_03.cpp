#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	
	int num = x * y * z;

	int list[10] = { };     //0~9까지의 배열 만들기
	while (num > 0) {        
		list[num % 10]++;   //해당 숫자의 인덱스++
		num /= 10;          //이미 센 수 제거
	}
	for (int i = 0; i < 10; i++) {
		cout << list[i] << endl;
	}
	return 0;
}
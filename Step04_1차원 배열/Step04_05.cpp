#include <iostream>
using namespace std;

int main() {
	int count;
	int max = 0;
	double sum = 0;
	double average;
	cin >> count;
	
	double score[1000] = { };
	for (int i = 0; i < count; i++) {
		cin >> score[i];
		if (max < score[i]) max = score[i];
	}

	for (int j = 0; j < count; j++) {
		score[j] = (score[j] / max * 100);
		sum += score[j];
	}
	average = sum / count;
	cout << average << endl;
	return 0;
}
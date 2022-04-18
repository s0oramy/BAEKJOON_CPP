#include <vector>

long long sum(std::vector<int>& a) {  
	long long ans = 0;
	for (auto aa : a) {    // auto는 자료형 추론
		ans += aa;
	}
	return ans;
}

/*
#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans += a.at(i);
	}
	return ans;
}
*/
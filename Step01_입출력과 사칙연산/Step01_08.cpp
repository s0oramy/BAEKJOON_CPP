#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout.precision(15);   //소수점 고정
    cout << a / b;
    return 0;
}
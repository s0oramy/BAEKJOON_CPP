#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    int first, second, third;
    first = a * (b % 10);
    second = a * (b % 100 / 10);
    third = a * (b / 100);

    cout << first << endl;
    cout << second << endl;
    cout << third << endl;
    cout << a * b << endl;

    return 0;
}
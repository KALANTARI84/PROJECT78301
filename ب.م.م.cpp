#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "enter number 1: ";
    cin >> num1;
    cout << "enter number 2: ";
    cin >> num2;

    cout << "b.m.m (" << num1 << ", " << num2 << ") = " << gcd(num1, num2) << endl;

    return 0;
}

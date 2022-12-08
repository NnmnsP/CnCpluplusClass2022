#include <iostream>

using namespace std;

int main() {
    int a, b, common;
    cin >> a >> b;
    while (a > 0 && b > 0) {
        if (a == b) {
            common = a;
            break;
        }

        if (a%2 == 0) {
            a /= 2;
        } else {
            a = (a-1)/2;
        }

        if (b%2 == 0) {
            b /= 2;
        } else {
            b = (b-1)/2;
        }
    }
    cout << common;
}
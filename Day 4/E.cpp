#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, power = 1;
    cin >> a >> b;

    if (a == 1) {
        c = 0;
    } else if (a >= b) {
        while (pow(b, power) < a) {
            power++;
        }
        if (pow(b, power) == a) {
            c = power;
        } else if (pow(b, power) > a) {
            c = -1;
        }
    } else {
        c = -1;
    }
    cout << c;
}
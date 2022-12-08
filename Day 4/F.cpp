#include <iostream>

using namespace std;

int main() {
    int a, b, gcd, sum = 0;
    cin >> a >> b;
    while (b != 0) {
        sum += a/b;
        gcd = a%b;
        a = b;
        b = gcd;
    }
    cout << sum << " " << a;
}
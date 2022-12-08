#include <iostream>

using namespace std;

int main() {
    int a, b, c, g1 = 150, g2 = 150;
    cin >> a >> b >> c;
    c -= a + b;
    g1 = 150 - a;
    g2 = 150 - b;
    if (c - g1 <= 0) {
        g1 = c;
        g2 = 0;
    } else {
        c -= g1;
        g2 = c;
    }
    cout << g1 << " " << g2;
}
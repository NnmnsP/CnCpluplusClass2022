#include <iostream>

using namespace std;

int main() {
    int a, b, min, max;
    cin >> a >> b;
    if ((a == 1 || b == 1) && ((a == 2 || b == 2))) {
        cout << 3;
    } else if ((a == 2 || b == 2) && ((a == 3 || b == 3))) {
        cout << 1;
    } else {
        cout << 2;
    }
}
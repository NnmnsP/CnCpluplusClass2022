#include <iostream>

using namespace std;

int main() {
    int k, x, a1, a2, temp;
    cin >> k >> x;
    temp = ((x*2/k) - (k - 1))/2;
    a1 = temp;
    a2 = temp + k - 1;
    cout << a1 << " " << a2;
    return 0;
}
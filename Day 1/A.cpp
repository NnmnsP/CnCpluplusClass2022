#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int x, y, z;
    int n = 0;
    cin >> x >> y >> z;
    n += abs(y - x);
    n += abs(z - y);
    n += abs(x - z);
    cout << n;
    return 0;
}
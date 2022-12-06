#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int x, y, z, n;
    cin >> x >> y >> z;
    n = x*100 + y*10 + z;
    n = n*n;
    cout << n;
    return 0;
}
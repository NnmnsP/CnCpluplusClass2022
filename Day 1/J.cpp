#include <iostream>
using namespace std;
int main() {
    int p, k, n;
    cin >> p >> k;
    n = (p/2)/(k+1);
    cout << n*n*k;
    return 0;
}
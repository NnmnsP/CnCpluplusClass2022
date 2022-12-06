#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c, total;
    cin >> a >> b >> c;
    total = a + b + c - min(min(a,b), min(b, c));
    cout << total;
    return 0;
}
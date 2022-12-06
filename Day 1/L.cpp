#include <iostream>
using namespace std;
int main() {
    int a, x, b, y, z;
    cin >> a >> x;
    cin >> b >> y;
    z = (a*x + b*y)/(a+b);
    cout << z;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, x1, x2;
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
 
    if (d > 0) {
        x1 = (-b + sqrt_val) / (2 * a);
        x2 = (-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        x1 = x2 = -b / (2 * a);
    }
    cout << x1 << " " << x2;
    return 0;
}
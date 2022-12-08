#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    double x, p, z, total = 0;
    cin >> x >> p >> z;
    while (x > 0) {
        x *= (1+p/100);
        if (z >= x) {
            total += x;
            break;
        } else {
            x -= z;
            total += z;
        }
    }
    cout << total;
}
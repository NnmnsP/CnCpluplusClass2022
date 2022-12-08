#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, x2, x3, distance;
    cin >> x1 >> x2 >> x3;
    if (abs(x2 - x1) + abs (x3 - x2) <= abs(x3 - x1) + abs (x2 - x3)) {
        distance = abs(x2 - x1) + abs (x3 - x2);
    } else {
        distance = abs(x3 - x1) + abs (x2 - x3);
    }
    cout << distance;
}
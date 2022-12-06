#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int x1, x2, x3, x4, points;
    cin >> x1 >> x2 >> x3 >> x4;
    points = max((min(max(x1, x2), max(x3, x4))-max(min(x1, x2), min(x3, x4)) + 1), 0);
    cout << points;
    return 0;
}
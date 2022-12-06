#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int x1, x2, x3, x4, points;
    cin >> x1 >> x2 >> x3 >> x4;
    int r1 = max(x1, x2), r2 = max(x3, x4), l1 = min(x1, x2), l2 = min(x3, x4);
    points = (r1 - l1 + r2 - l2 + 2) - max((min(r1, r2) - max(l1, l2) + 1), 0);
    cout << points;
}
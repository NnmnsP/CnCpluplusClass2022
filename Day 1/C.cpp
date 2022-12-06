#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int x1, x2, y1, y2, distance;
    cin >> x1 >> x2 >> y1 >> y2;
    distance = abs(y1 - x1) + abs(y2 - x2);
    cout << distance;
    return 0;
}
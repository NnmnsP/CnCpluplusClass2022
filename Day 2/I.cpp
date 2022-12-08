#include <iostream>
using namespace std;
int main() {
    float v1, v2, v3, s, seconds;
    cin >> v1 >> v2 >> v3 >> s;
    if (s < v1 * 300) {
        printf("%.6f", s/v1);
    } else if (s < v1 * 300 + v2 * 600) {
        printf("%.6f", 300 + (s - v1*300)/v2);
    } else {
        printf("%.6f", 300 + 600 + (s - v1*300 - v2*600)/v3);
    }
}
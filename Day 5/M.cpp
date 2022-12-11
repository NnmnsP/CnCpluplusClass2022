#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, peri = 0;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        peri += 2;
        if (i == n - 1) {
            peri += h[i];
        }

        if (i == 0) {
            peri += h[i];
        }

        if (i != 0) {
            peri += abs(h[i] - h[i - 1]);
        }
    }
    cout << peri;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> d(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (a[0] == 0) {
        d[0] = 0;
    } else {
        d[0] = 1000000001;
    }

    // distance from left
    for (int i = 1; i < n; i++) {
        d[i] = d[i - 1] + 1;

        if (a[i] == 0) {
            d[i] = 0;
        }
    }

    if (a[n - 1] == 0) {
        d[n - 1] = 0;
    }

    for (int i = n - 2; i >= 0; i--) {
        d[i] = min(d[i], d[i + 1] + 1);

        if (a[i] == 0) {
            d[i] = 0;
        }
    }

    for (int e: d) {
        cout << e << " ";
    }
}
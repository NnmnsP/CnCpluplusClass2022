#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    b[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--) {
        b[i] = b[i + 1] + 1;

        if (a[i] < 0) {
            b[i] = 0;
        }
    }

    for (int e: b) {
        cout << e << " ";
    }
}
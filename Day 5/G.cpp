#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c.push_back(a[i++]);
        } else {
            c.push_back(b[j++]);
        }
    }

    while (i < n) {
        c.push_back(a[i++]);
    }
    while (j < m) {
        c.push_back(b[j++]);
    }

    // Print out the new vector
    for (int e: c) {
        cout << e << " ";
    }
}

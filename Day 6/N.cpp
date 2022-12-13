#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> c(n);
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    while (a.size() < n) {
        int min_val = INT_MAX;
        int min_index;
        for (int i = 0; i < n; i++) {
            if (c[i] < min_val && c[i] != -1) {
                min_val = c[i];
                min_index = i;
            }
        }
        a.push_back(c[min_index]);
        c[min_index] = -1;
        for (int i = min_index + 1; i < n; i++) {
            if (min_val < c[i] && c[i] != -1) {
                a.push_back(c[i]);
                min_val = c[i];
                c[i] = -1;
            }
        }
    }

    for (int e: a) {
        cout << e << " ";
    }
}
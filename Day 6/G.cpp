#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int length = 0;
    int start, stop;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (p[j] == i) {
                start = j;
            } else if (p[j] == i + 1) {
                stop = j;
            }
        }
        length += abs(start - stop);
    }
    cout << length;
}
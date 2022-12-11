#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;

    vector<int> v(n);
    vector<int> firstShiftIndex(n);
    vector<int> secondShiftIndex(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        firstShiftIndex[(i - q + n) % n] = i;
    }

    for (int i = 0; i < n / 2; i++) {
        secondShiftIndex[(i - p + n / 2) % (n / 2)] = firstShiftIndex[i];
    }

    for (int i = n / 2; i < n; i++) {
        secondShiftIndex[(i - p + n / 2) % (n / 2) + (n / 2)] = firstShiftIndex[i];
    }

    for (int i = 0; i < n; i++) {
        cout << v[secondShiftIndex[i]] << " ";
    }
}
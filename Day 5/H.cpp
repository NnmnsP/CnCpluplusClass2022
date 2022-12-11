#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            ones++;
        } else {
            zeros++;
        }
    }

    int moves;
    int count = 0;
    if (zeros == 0 || ones == 0) {
        moves = 0;
    } else {
        for (int i = 0; i < zeros; i++) {
            if (a[i] == 0) {
                count++;
            }
        }
        moves = zeros - count;
    }

    cout << moves;
}
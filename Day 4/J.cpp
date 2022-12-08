#include <iostream>

using namespace std;

int main() {
    int n, temp, max_so_far = -10001, max_ending = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        max_ending += temp;

        if (max_so_far < max_ending) {
            max_so_far = max_ending;
        }

        if (max_ending < 0) {
            max_ending = 0;
        }
    }
    cout << max_so_far;
}
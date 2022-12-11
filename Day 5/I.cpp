#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, min_index, max_index, min_val = INT_MAX, max_val = INT_MIN;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] < min_val) {
            min_index = i;
            min_val = a[i];
        }

        if (a[i] >= max_val) {
            max_index = i;
            max_val = a[i];
        }
    }

    int temp;
    if (max_index < min_index) {
        temp = max_index;
        max_index = min_index;
        min_index = temp;
    }

    for (int i = 0; i < min_index; i++) {
        cout << a[i] << " ";
    }
    for (int i = max_index; i >= min_index; i--) {
        cout << a[i] << " ";
    }
    for (int i = max_index+1; i < n; i++) {
        cout << a[i] << " ";
    }
}
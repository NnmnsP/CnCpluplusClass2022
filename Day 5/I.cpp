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

    int loop = (max_index - min_index)/2;
    if (loop == 0) {
        loop++;
    }
    for (int i = 0; i < loop; i++) {
        temp = a[min_index + i];
        a[min_index + i] = a[max_index - i];
        a[max_index - i] = temp;
    }

    for (int e: a) {
        cout << e << " ";
    }
}
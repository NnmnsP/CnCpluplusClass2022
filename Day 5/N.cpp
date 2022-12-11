#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    int segment_start;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == m) {
            segment_start = i;
        }
    }

    int segment_length = 1;
    for(int i = segment_start - 1; i >= 0; i--) {
        if (a[i] > m) {
            segment_length++;
        } else {
            break;
        }
    }

    for (int i = segment_start + 1; i < n; i++) {
        if (a[i] > m) {
            segment_length++;
        } else {
            break;
        }
    }

    cout << segment_length;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, min = INT_MAX, count = 0;
    cin >> n;
    vector<int> a(n);

    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i] < min) {
            min = a[i];
        }
    }

    for(int e: a) {
        if (e%min == 0) {
            count++;
        }
    }
    cout << min << " " << count;
}
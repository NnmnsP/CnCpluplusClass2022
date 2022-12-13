#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i=0; i<n;i++) {
        cin >> a[i];
    }

    int count_pairs = 0;
    for (int i =0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (abs(i-j) >= abs(a[i] - a[j])) {
                count_pairs++;
            }
        }
    }
    cout << count_pairs << endl;
}

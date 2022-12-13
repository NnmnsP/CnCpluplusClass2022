#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxCount = 0;
    int maxOccur = INT_MAX;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxOccur = a[i];
        } else if (count == maxCount && a[i] < maxOccur) {
            maxOccur = a[i];
        }
    }
    cout << maxOccur << " " << maxCount << endl;
}
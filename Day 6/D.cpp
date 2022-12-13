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

    int count_num = 0;
    for (int i = 0; i < n; i++) {
        int leftGreater = 0;
        int rightLess = 0;

        // Iterate over the elements to the left of a[i]
        for (int j = 0; j < i; j++) {
            if (a[j] > a[i]) {
                leftGreater++;
            }
        }

        // Iterate over the elements to the right of a[i]
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                rightLess++;
            }
        }

        // If the number of elements to the left and right are equal, then increment the count
        if (leftGreater == rightLess) {
            count_num++;
        }
    }
    cout << count_num << endl;
}

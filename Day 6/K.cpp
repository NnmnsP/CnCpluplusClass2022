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
    vector<int> indices(n);
    for (int i = 0; i < n - 1; i++) {
        // find the maximum element in the current subarray (from i to n - 1)
        int max_index = 0;
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[max_index]) {
                max_index = j;
            }
        }

        // swap the maximum element with the last element of the subarray
        int temp = a[max_index];
        a[max_index] = a[n - 1 - i];
        a[n - 1 - i] = temp;

        // store the index of the maximum element
        indices[i] = max_index;
    }

    // print the indices of the maximum on each phase
    for (int i = 0; i < n; i++) {
        cout << indices[i] << " ";
    }
}
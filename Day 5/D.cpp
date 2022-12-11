#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Read in the length of the array

    int min_pos = -1; // Position of the first minimum
    int min_dist = -1; // Distance between the nearest minima
    int cur_dist = 0; // Current distance between minima
    int min_val = INT_MAX;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Read in the next element of the array
        if (a[i] < min_val) {
            min_val = a[i];
        }
    }

    for (int i=0; i<n; i++) {
        // If the current element is a minimum
        if (a[i] == min_val) {
            // If this is the first minimum we've found
            if (min_pos == -1) {
                min_pos = i; // Set the position of the first minimum
            } else {
                // Calculate the distance between the current minimum and the previous one
                cur_dist = i - min_pos;

                // If this is the first time we've found a minimum distance,
                // or if the current distance is smaller than the previous minimum distance
                if (min_dist == -1 || cur_dist < min_dist) {
                    min_dist = cur_dist; // Set the current distance as the new minimum distance
                }

                // Update the position of the first minimum
                min_pos = i;
            }
        }
    }

    // Print out the minimum distance
    cout << min_dist << endl;
}

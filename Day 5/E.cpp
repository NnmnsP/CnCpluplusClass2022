#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; // Read in the length of the array

    vector<int> a(n); // Create a vector to store the array

    // Read in the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cur_segment_len = 1; // Length of the current segment
    vector<int> segment_lengths; // Vector to store the length of each segment

    for (int i = 1; i < n; i++) {
        // If the current element is greater than the previous element
        // it is part of the current segment
        if (a[i] > a[i - 1]) {
            cur_segment_len++;
        } else {
            // If the current element is not greater than the previous element,
            // it indicates the end of the current segment, so we add the length
            // of the segment to the vector of segment lengths and reset the
            // current segment length
            segment_lengths.push_back(cur_segment_len);
            cur_segment_len = 1;
        }
    }

    // Add the length of the last segment to the vector of segment lengths
    segment_lengths.push_back(cur_segment_len);

    // Print out the total number of segments
    cout << segment_lengths.size() << endl;

    // Print out the length of each segment
    for (int len: segment_lengths) {
        cout << len << " ";
    }
    cout << endl;

    return 0;
}

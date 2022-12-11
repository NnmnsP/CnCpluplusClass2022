#include <iostream>
#include <vector>

using namespace std;

vector<int> shift_right(vector<int> a, int k) {
    // Shift the array a cyclically to the right by k positions
    vector<int> b(a.size());
    for (int i = 0; i < a.size(); i++) {
        b[(i + k) % a.size()] = a[i];
    }
    return b;
}

int main() {
    // Read the size of the array and the values of p and q
    int n, p, q;
    cin >> n >> p >> q;

    // Read the encoded array
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Split the array into two parts
    int half_size = n / 2;
    vector<int> left_part(a.begin(), a.begin() + half_size);
    vector<int> right_part(a.begin() + half_size, a.end());

    // Shift each part cyclically to the right by p positions
    left_part = shift_right(left_part, p);
    right_part = shift_right(right_part, p);

    // Concatenate the two parts and shift the resulting array
    // cyclically to the right by q positions
    vector<int> b(n);
    for (int i = 0; i < half_size; i++) {
        b[i] = left_part[i];
        b[i + half_size] = right_part[i];
    }
    b = shift_right(b, q);

    // Print the decoded array
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
}

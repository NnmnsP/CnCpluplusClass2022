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

    int identical_count = 1;
    int identical_val = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            identical_val = a[i];
        } else {
            if (a[i] == identical_val) {
                identical_count++;
            } else {
                cout << identical_count << " " << identical_val << " ";
                identical_val = a[i];
                identical_count = 1;
            }
        }
    }
    cout << identical_count << " " << identical_val;
}

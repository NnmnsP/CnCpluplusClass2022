#include <iostream>

using namespace std;

int main() {
    int n, temp, min = 10001, min_index = -1;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        if (temp < min) {
            min = temp;
            min_index = i;
        }
    }
    cout << min_index + 1;
}
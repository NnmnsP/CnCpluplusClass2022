#include <iostream>

using namespace std;

int main() {
    int n, temp, count, min = 10001;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp < min) {
            min = temp;
            count = 1;
        } else if (temp == min) {
            count++;
        }
    }
    cout << count;
}
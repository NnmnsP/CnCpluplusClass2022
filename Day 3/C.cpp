#include <iostream>

using namespace std;

int main() {
    int n, temp, sum = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        if (i%2 == 1) {
            sum -= temp;
        } else {
            sum += temp;
        }
    }
    cout << sum;
}
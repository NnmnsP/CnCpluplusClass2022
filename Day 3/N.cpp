#include <iostream>

using namespace std;

int main() {
    int k, sum, numbers = 0;
    cin >> k;
    for (int i=100; i<=999; i++) {
        sum = i/100 + (i/10)%10 + i%10;
        if (sum%k == 0) {
            numbers++;
        }
    }
    cout << numbers;
}
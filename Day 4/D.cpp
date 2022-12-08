#include <iostream>

using namespace std;

int main() {
    int n, temp, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if ((i != 0) && ((i & (i - 1)) == 0)) {
            sum += temp;
        }
    }
    cout << sum;
}
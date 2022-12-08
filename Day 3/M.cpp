#include <iostream>

using namespace std;

int main() {
    int n, temp, sum = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> temp;
        if (temp%3 == 0 || temp%10 == 3) {
            sum += temp;
        }
    }
    cout << sum;
}
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int result = 0;
    for (int x = 1; x <= n; x++) {
        int divisor = 0;
        for (int i = 1; i <= x; i++) {
            if (x % i == 0 && n % i == 0) {
                divisor++;
            }
        }

        if (divisor == k) {
            result++;
        }
    }
    cout << result << endl;
}

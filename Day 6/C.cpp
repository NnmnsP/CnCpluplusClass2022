#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int max_divisors = -1;
    int max_num;
    for (int i = a; i <= b; i++) {
        int cur_divisors = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cur_divisors++;
            }
        }

        if (cur_divisors >= max_divisors) {
            max_num = i;
            max_divisors = cur_divisors;
        }
    }
    cout << max_num << endl;
}

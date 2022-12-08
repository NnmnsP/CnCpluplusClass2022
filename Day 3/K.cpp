#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    int n, sumEven = 0, sumOdd = 0, digits = 1;
    cin >> n;
    while (n != 0) {
        if (digits%2 == 0) {
            sumEven += n%10;
        } else {
            sumOdd += n%10;
        }
        n /= 10;
        digits++;
    }
    if (sumEven == sumOdd) {
        cout << 1;
    } else {
        cout << 0;
    }
}
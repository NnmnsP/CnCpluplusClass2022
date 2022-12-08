#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    int n, days = 0, i = 1;
    cin >> n;
    while (n - i*i >= 0) {
        days++;
        n -= i*i;
        i++;
    }
    cout << days;
}
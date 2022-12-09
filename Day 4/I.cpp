#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, temp, common;
    cin >> a >> b;
    while (true) {
        if (a == b) {
            common = a;
            break;
        }
        
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        
        if (b%2 == 1) {
            b = (b-1)/2;
        } else {
            b /= 2;
        }
        
    }
    cout << common;
}
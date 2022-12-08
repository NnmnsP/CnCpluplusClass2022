#include <iostream>

using namespace std;

int main() {
    int k, first, last, number = -1, count = 0;
    cin >> k;
    for (int i=100000; i<=999999; i++) {
        first = i/100000 + (i/10000)%10 + (i/1000)%10; 
        last = (i/100)%10 + (i/10)%10 + i%10;
        if(first == last) {
            count++;
            if (count == k) {
                number = i;
                break;
            }
        }
    }
    cout << number;
}
#include <iostream>

using namespace std;

int main() {
    int n, temp, min = 1000000001, second_min = 1000000001;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp <= min) {
            second_min = min;
            min = temp;
        }
        
        if (temp <= second_min && temp > min) {
            second_min = temp;
        }
    }
    cout << min + second_min;
}
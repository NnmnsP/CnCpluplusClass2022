#include <iostream>

using namespace std;

int main() {
    int n, temp, count = 0, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == 1) {
            count++;
            if (count > max) {
                max = count;
            }
        } else if (temp == 0) {
            count = 0;  
            }
    }
    cout << max;
}
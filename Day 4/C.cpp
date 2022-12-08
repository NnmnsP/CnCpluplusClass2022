#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, temp, min_index, max_index, min = 1000000001, max = -1000000001;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp < min) {
            min = temp;
            min_index = i;
        } 

        if (temp >= max) {
            max = temp;
            max_index = i;
        }
    }
    cout << abs(min_index - max_index);
}
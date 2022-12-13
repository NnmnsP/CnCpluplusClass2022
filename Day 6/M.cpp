#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int solved = 0;
    int skills = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (skills >= a[i]) {
                solved++;
                skills += 1 + (a[i] + 1)/2 ;
                a[i] = INT_MAX;
            }
        }
    }
    cout << solved << endl;
}
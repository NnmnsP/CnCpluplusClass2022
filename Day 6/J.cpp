#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int bulls = 0;
    int cows = 0;
    for(int i = 0; i<n; i++) {
        if (a[i] == b[i]) {
            bulls++;
        } else {
            for(int j = 0; j<n; j++) {
                if (a[i] == b[j]) {
                    cows++;
                }
            }
        }
    }
    cout << bulls << " " << cows << endl;
}
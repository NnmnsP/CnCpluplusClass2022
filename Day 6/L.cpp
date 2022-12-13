#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int count_all = 0;
    for (int i = 0; i < n; i++) {
        int count_cur = 0;
        for (int j = 0; j < n; j++) {
            count_cur += a[j] == b[(j+i+n)%n];
        }
        if (count_cur > count_all) {
            count_all = count_cur;
        }
    }
    cout << n - count_all << endl;
}
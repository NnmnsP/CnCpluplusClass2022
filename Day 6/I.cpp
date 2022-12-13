#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> t(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[j] == i) {
                break;
            } else if (p[j] > i){
                t[i]++;
            }
        }
        cout << t[i] << " ";
    }
}
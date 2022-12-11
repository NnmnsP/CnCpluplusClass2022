#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> children(10);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        children[a[i]]++;
    }

    int max_children = INT_MIN, index;
    for (int i = 0; i < 10; i++) {
        if (children[i] > max_children) {
            index = i;
            max_children = children[i];
        }
    }
    cout << index;
}
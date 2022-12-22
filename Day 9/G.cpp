#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> new_values;
    vector<int> values;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        values.push_back(a);
        new_values[a]++;
    }

    int count = 0;
    for (auto& [a, new_value] : new_values) {
        new_value = count;
        count++;
    }

    for (int i = 0; i < n; i++) {
        cout << new_values[values[i]] << " ";
    }
}

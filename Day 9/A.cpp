#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int k;
    cin >> k;

    // Use an unordered_map to store the balances of each user
    unordered_map<string, int> balances;

    // Read the records and update the balances of the users
    for (int i = 0; i < k; i++) {
        string name1, name2;
        int amount;
        cin >> name1 >> name2 >> amount;
        balances[name1] -= amount;
        balances[name2] += amount;
    }

    // Sort the names lexicographically
    vector<string> names;
    for (auto& [name, balance] : balances) {
        names.push_back(name);
    }
    sort(names.begin(), names.end());

    // Print the name and balance of each user
    for (string& name : names) {
        cout << name << " " << balances[name] << endl;
    }
}

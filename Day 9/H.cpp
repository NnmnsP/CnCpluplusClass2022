#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Use a map to store the sequences in which each number occurs
    map<int, set<int>> occurrences;

    // Read the sequences and update the map
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            occurrences[a].insert(i);
        }
    }

    // Print the numbers and their sequences
    for (const auto& [number, sequences] : occurrences) {
        cout << number << " ";
        for (const int& sequence : sequences) {
            cout << sequence << " ";
        }
        cout << endl;
    }
}

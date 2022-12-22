#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Use a priority queue to store the multiset
    priority_queue<int, vector<int>, greater<int>> multiset;

    // Process the queries
    for (int i = 0; i < n; i++) {
        int query;
        cin >> query;

        if (query == 1) {
            int x;
            cin >> x;
            // Add item x to the set
            multiset.push(x);
        } else {
            // Remove the minimum element in the set and return its value
            int min_element = multiset.top();
            multiset.pop();
            cout << min_element << endl;
        }
    }
}

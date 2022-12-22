#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<string, vector<string>> tree;

void print_tree(string subtopic, int level) {
    cout << string(2 * level, ' ') << subtopic << endl;
    if (tree[subtopic].size() == 0) return;
    sort(tree[subtopic].begin(), tree[subtopic].end());
    for (auto& t : tree[subtopic]) {
        print_tree(t, level + 1);
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        string parent, child;
        cin >> child >> parent;
        tree[parent].push_back(child);
    }

    print_tree("main", 0);
}

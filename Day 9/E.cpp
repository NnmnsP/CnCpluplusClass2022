#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;

    // Use a set to store the substrings
    set<string> substrings;

    // Generate all substrings of s and add them to the set
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j <= s.size(); j++) {
            substrings.insert(s.substr(i, j - i));
        }
    }

    // Print the size of the set and all the substrings in the set
    cout << substrings.size() << endl;
}

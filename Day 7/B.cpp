#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i - 1] && s[i] == s[i - 2] && i > 1) {
            continue;
        } else {
            cout << s[i];
        }
    }
}
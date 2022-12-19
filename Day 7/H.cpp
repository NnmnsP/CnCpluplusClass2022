#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (char &c: s) {
        if (c >= 'A' && c <= 'Z') {
            count++;
        }
    }

    if (count == s.length()) {
        for (char &c: s) {
            cout << char(c + (-'A' + 'a'));
        }
    }

    if (count == s.length() - 1 && (s.front() >= 'a' && s.front() <= 'z')){
        for (char &c: s) {
            if (c >= 'A' && c <= 'Z') {
                c += (-'A'+'a');
            }
        }
        s.front() += (-'a' + 'A');
    }
    cout << s << endl;
}
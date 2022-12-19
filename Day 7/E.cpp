#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string answer;
    if (s.find('_') != string::npos) {
        int i = 0;
        while (i < s.length()) {
            if (s[i] == '_') {
                i++;
                answer += s[i] - 32;
            } else {
                answer += s[i];
            }
            i++;
        }
    } else {
        int i = 0;
        while (i < s.length()) {
            if (s[i] >= 65 && s[i] <= 90) {
                answer += '_';
                s[i] += 32;
            }
            answer += s[i];
            i++;
        }
    }
    cout << answer << endl;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> lst;

    char lastChar = '_';
    string temp;
    for (char c : s) {
        if (c == ',') {
            if (!temp.empty()) {
                while (temp.back() == '_') {
                    temp.pop_back();
                }
                lst.push_back(temp);
                temp = "";
            }
        } else if (c == '_') {
            if (lastChar != '_' && lastChar != ',')
                temp += "_";
        } else {
            temp += c;
        }
        lastChar = c;
    }
    
    if (!temp.empty()) {
        while (temp.back() == '_') {
            temp.pop_back();
        }
        lst.push_back(temp);
    }
    
    cout << lst.size() << endl;
    for (const string &e : lst)
        cout << e << endl;
}
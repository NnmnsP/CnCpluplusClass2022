#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    size_t oops_pos = s.find("oops");
    while (oops_pos != string::npos) {
        s.erase(oops_pos, 4);
        oops_pos = s.find("oops");
    }
    cout << s << endl;
}
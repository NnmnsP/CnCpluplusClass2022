#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;
    string isSquare;
    if (s.length()%2 == 1) {
        isSquare = "No";
    } else {
        int half_length = s.length() / 2;
        string first_half = s.substr(0, half_length);
        string second_half = s.substr(half_length);
        if (first_half == second_half) {
            isSquare = "Yes";
        } else {
            isSquare = "No";
        }
    }

    cout << isSquare << endl;
}
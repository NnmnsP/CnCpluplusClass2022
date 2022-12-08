#include <iostream>

using namespace std;

int main() {
    int day;
    cin >> day;
    if ((day%3 == 0 && day%10 != 3) || (day%3 != 0 && day%10 == 3)) {
        cout << 1;
    } else {
        cout << 0;
    }
}
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n > 77) {
        cout << 5;
    } else if (n > 52) {
        cout << 4;
    } else  if (n > 28) {
        cout << 3;
    } else {
        cout << 2;
    }
}
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == c && a == b && b == c){
        cout << 0;
    } else if ((a == c) || (a == b) || (b == c)) {
        cout << 1;
    } else {
        cout << 2;
    }
}
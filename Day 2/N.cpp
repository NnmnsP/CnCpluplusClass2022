#include <iostream>

using namespace std;

int main() {
    int a0, a1, a2, a3;
    cin >> a0 >> a1 >> a2 >> a3;
    if (a0 <= a1 && a1 <= a2 && a2 <= a3) {
        cout << 0;
    } else if ((a0 <= a1 && a1 <= a3) || (a0 <= a2 && a2 <= a3) || (a1 <= a2 && a2 <= a3) || (a0 <= a1 && a1 <= a2)){
        cout << 1;
    } else if (a0 >= a1 && a1 >= a2 && a2 >= a3) {
        cout << 2;
    } else if ((a0 >= a1 && a1 >= a3) || (a0 >= a2 && a2 >= a3) || (a1 >= a2 && a2 >= a3) || (a0 >= a1 && a1 >= a2)) {
        cout << 3;
    } else {
        cout << 2;
    }
}
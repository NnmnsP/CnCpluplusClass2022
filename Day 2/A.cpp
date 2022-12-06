#include <iostream>
using namespace std;
int main() {
    int a, b, c, total;
    cin >> a >> b >> c;
    if ((b > c && c > a)|| (a > c && c > b)){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n, k, day;
    cin >> n;
    cin >> k;
    day = (n+k-1)%7;
    if (day == 0){
        day = 7;
    }
    cout << day;
    return 0;
}
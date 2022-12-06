#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int x, y, max_day, min_day, temp;
    cin >> x >> y;
    temp = abs(x - y);
    if (temp > 7 - temp){
        max_day = temp;
        min_day = 7 - temp;
    } else {
        max_day = 7 - temp;
        min_day = temp;
    }
    cout << min_day << " " << max_day;
    return 0;
}
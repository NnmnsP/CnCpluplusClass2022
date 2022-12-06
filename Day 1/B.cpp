#include <iostream>
using namespace std;
int main() {
    int num, area_code;
    cin >> num;
    num %= 100000000;
    area_code = num / 100000;
    cout << area_code;
    return 0;
}
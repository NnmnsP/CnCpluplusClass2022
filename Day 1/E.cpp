#include <iostream>
using namespace std;
int main() {
    int n, k, hours;
    cin >> n >> k;
    hours = n/k;
    if (n%k != 0){
        hours++;
    }
    cout << hours;
    return 0;
}
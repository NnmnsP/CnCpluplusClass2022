#include <iostream>

using namespace std;

int main() {
    int n, temp, distance = 0, jump = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        jump += i;
        distance += jump;
        cout << distance << " ";
    }
}
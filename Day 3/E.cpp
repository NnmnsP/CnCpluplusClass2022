#include <iostream>

using namespace std;

int main() {
    int n, temp, distance = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        distance += i;
        cout << distance << " ";
    }
}
#include <iostream>
using namespace std;
int main() {
    int n, a, b, quests;
    cin >> n >> a >> b;
    if (a >= b) {
        quests = n/a;
        if (n%a != 0) {
            quests++;
        }
    } else {
        
    }
    cout << quests;
    return 0;
}
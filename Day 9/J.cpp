#include <iostream>
#include <unordered_map>

using namespace std;

long long a0, X, Y, M;

int main() {
    cin >> a0 >> X >> Y >> M;

    unordered_map<long long, int> seen;
    seen[a0] = 0;
    long long a = a0;
    int i = 1;
    while (true) {
        a = (X * a + Y) % M;
        if (seen.count(a) > 0) {
            cout << i - seen[a] << " " << seen[a] << endl;
            break;
        }
        seen[a] = i;
        i++;
    }

    return 0;
}

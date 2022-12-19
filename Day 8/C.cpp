#include <iostream>
#include <string>
#include <vector>

using namespace std;
// not edited yet
int main() {
    int n, m;
    cin >> n >> m;

    vector<string> box(n);
    for (int i = 0; i < n; i++) {
        cin >> box[i];
    }

    int count_line = 0;
    for (int i = 0; i < n; i++) {
        int count_asterisk_horizontal = 0;
        for (int j = 0; j < m; j++) {
            if (box[i][j] == '*') {
                count_asterisk_horizontal++;
            }
        }
        if (count_asterisk_horizontal == m) {
            count_line++;
        }
    }
    for (int i = 0; i < m; i++) {
        int count_asterisk_vertical = 0;
        for (int j = 0; j < n; j++) {
            if (box[j][i] == '*') {
                count_asterisk_vertical++;
            }
        }
        if (count_asterisk_vertical == n) {
            count_line++;
        }
    }
    cout << count_line << endl;
}
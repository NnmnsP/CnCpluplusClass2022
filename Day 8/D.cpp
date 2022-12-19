#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> box(n);
    for (int i = 0; i < n; i++) {
        cin >> box[i];
    }

    string is_over = "No";
    for (int i = 0; i < n; i++) {
        int count_X_horizontal = 0;
        int count_O_horizontal = 0;
        for (int j = 0; j < m; j++) {
            if (box[i][j] == 'X') {
                count_X_horizontal++;
            }
            if (box[i][j] == 'O') {
                count_O_horizontal++;
            }
        }
        if (count_X_horizontal == m || count_O_horizontal == m) {
            is_over = "Yes";
            break;
        } else {
            is_over = "No";
        }
    }
    if (is_over == "No") {
    for (int i = 0; i < m; i++) {
        int count_X_vertical = 0;
        int count_O_vertical = 0;
        for (int j = 0; j < n; j++) {
            if (box[j][i] == 'X') {
                count_X_vertical++;
            }
            if (box[j][i] == 'O') {
                count_O_vertical++;
            }
        }
        if (count_X_vertical == n || count_O_vertical == n) {
            is_over = "Yes";
            break;
        } else {
            is_over = "No";
        }
    }
    }
    cout << is_over << endl;
}
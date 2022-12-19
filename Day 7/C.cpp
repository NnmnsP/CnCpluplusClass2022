#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> lines(n);
    for (int i = 0; i < n; i++) {
        cin >> lines[i];
    }

    int emails = 0;
    for (int i = 0; i < n; i++) {
        int count_at = 0;
        if (lines[i][0] == '@' || lines[i][lines[i].length() - 1] == '@') {
            continue;
        } else {
            int count_wrong = 0;
            for (int j = 0; j < lines[i].length() - 1; j++) {
                if ((lines[i][j] == '@' && lines[i][j + 1] == '@') || (lines[i][j] == '.' && lines[i][j + 1] == '.')) {
                    count_wrong++;
                } else if (lines[i][j] == '@') {
                    count_at++;
                }
            }
            if (count_at == 1 && count_wrong == 0) {
                emails++;
            }
        }
    }
    cout << emails << endl;
}
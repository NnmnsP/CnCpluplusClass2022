#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> grades;
    map<string, int> count;

    for (int i = 0; i < n; i++) {
        string name;
        int grade;
        cin >> name >> grade;
        grades[name] += grade;
        count[name]++;
    }

    for (auto& [name, count] : count) {
        cout << name << " " << grades[name] / count << endl;
    }
}

#include <iostream>
using namespace std;
int main() {
    int n;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
    cin >> n;
    cout << months[n - 1];
}
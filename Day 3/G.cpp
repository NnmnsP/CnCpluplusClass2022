#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    int n, sum = 0, distance = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        distance += i;
        sum += pow(-1, i+1) * pow(distance, 2);
    }
    cout << sum;
}
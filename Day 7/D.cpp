#include <iostream>
#include <string>

using namespace std;

int main() {
    // Read the input number as a string
    string n;
    cin >> n;

    // Initialize the result string
    string result = "";

    // Iterate over the characters in the input string, starting from the rightmost character
    int carry = 0;
    for (int i = n.length() - 1; i >= 0; i--) {

        int c;
        if (i == n.length() - 1) {
            c = n[i] - '0' + 1;
        } else {
            c = n[i] - '0' + carry;
        }
        // If the result is 10 or more, set it to 0 and carry the extra value
        if (c >= 10) {
            c -= 10;
            carry = 1;
        } else {
            carry = 0;
        }

        // Append the result to the result string
        result += char(c + '0');
    }

    // If there is still a carried value, append it to the result string
    if (carry > 0) {
        result += char(carry + '0');
    }

    // Reverse the result string and print it
    reverse(result.begin(), result.end());
    cout << result << endl;
}

#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Use an unordered_map to store the identifiers of the words
    unordered_map<string, int> identifiers;

    // Use a counter to assign new identifiers to the words
    int counter = 1;

    // Read the text
    string word;
    while (cin >> word) {
        // Convert the word to lower case
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        // Check if the word has already been encountered
        if (identifiers.count(word) == 0) {
            // Assign a new identifier to the word
            identifiers[word] = counter++;
        }

        // Output the identifier of the word
        cout << identifiers[word] << " ";
    }
}

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Use an unordered_map to store the frequency of each word
    map<string, int> frequencies;

    // Read the text
    string word;
    while (cin >> word) {
        // Convert the word to lower case
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        // Update the frequency of the word
        frequencies[word]++;
    }

    // Find the maximum frequency
    int max_frequency = 0;
    for (auto& [word, frequency] : frequencies) {
        max_frequency = max(max_frequency, frequency);
    }

    // Print the words that occur the most times
    for (auto& [word, frequency] : frequencies) {
        if (frequency == max_frequency) {
            cout << word << endl;
        }
    }
}

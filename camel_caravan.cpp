#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void sortIdentifiersByFrequency(const string& s) {
    unordered_map<char, int> frequency;

    // Count the frequency of each character
    for (char c : s) {
        frequency[c]++;
    }

    // Create a vector of pairs and sort by frequency and ASCII value
    vector<pair<char, int>> sortedIdentifiers(frequency.begin(), frequency.end());
    sort(sortedIdentifiers.begin(), sortedIdentifiers.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        if (a.second != b.second) {
            return a.second > b.second; // Sort by frequency in descending order
        }
        return a.first < b.first; // Sort by ASCII value in ascending order
    });

    // Build and print the result string based on sorted order
    for (const auto& p : sortedIdentifiers) {
        for (int i = 0; i < p.second; ++i) {
            cout << p.first;
        }
    }
    cout << endl;
}

int main() {
    int T;  // Number of test cases
    cin >> T;
    cin.ignore();

    while (T--) {
        string s;
        getline(cin, s);  // Read the sequence of camel identifiers

        sortIdentifiersByFrequency(s);
    }

    return 0;
}

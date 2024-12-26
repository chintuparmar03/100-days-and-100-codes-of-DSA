#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> masses(n);
        for (int i = 0; i < n; i++) {
            cin >> masses[i];
        }

        unordered_map<int, int> freq;
        int maxPairs = 0;

        for (int weight : masses) {
            int complement = k - weight;

            if (freq[complement] > 0) {
                maxPairs++;
                freq[complement]--;
            } else {
                freq[weight]++;
            }
        }

        cout << maxPairs << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> loadCapacity(n);
        for (long int i = 0; i < n; i++) {
            cin >> loadCapacity[i];
        }

        // Sort the array to facilitate optimal pairing
        sort(loadCapacity.begin(), loadCapacity.end());

        long int minimizedMaxLoad = 0;

        // Pair the smallest and largest remaining values
        for (long int i = 0; i < n / 2; i++) {
            long int pairLoad = loadCapacity[i] + loadCapacity[n - i - 1];
            minimizedMaxLoad = max(minimizedMaxLoad, pairLoad);
        }

        cout << minimizedMaxLoad << endl;
    }

    return 0;
}
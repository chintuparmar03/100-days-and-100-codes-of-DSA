#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> precomputeSpiritEnergy(int maxDifficulty) {
    vector<int> spiritEnergy(maxDifficulty + 1);
    for (int i = 0; i <= maxDifficulty; ++i) {
        spiritEnergy[i] = __builtin_popcount(i);
    }
    return spiritEnergy;
}

void solve(vector<int>& spiritEnergy) {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> cliffs(N);
        int maxCliff = 0;
        for (int i = 0; i < N; ++i) {
            cin >> cliffs[i];
            maxCliff = max(maxCliff, cliffs[i]);
        }

        if (maxCliff >= (int)spiritEnergy.size()) {
            int currentSize = spiritEnergy.size();
            spiritEnergy.resize(maxCliff + 1);
            for (int i = currentSize; i <= maxCliff; ++i) {
                spiritEnergy[i] = __builtin_popcount(i);
            }
        }

        stable_sort(cliffs.begin(), cliffs.end(), [&](int a, int b) {
            if (spiritEnergy[a] != spiritEnergy[b]) {
                return spiritEnergy[a] < spiritEnergy[b];
            }
            return a < b;
        });

        for (int i = 0; i < N; ++i) {
            cout << cliffs[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int INITIAL_MAX_DIFFICULTY = 1000000;
    
    vector<int> spiritEnergy = precomputeSpiritEnergy(INITIAL_MAX_DIFFICULTY);

    solve(spiritEnergy);

    return 0;
}
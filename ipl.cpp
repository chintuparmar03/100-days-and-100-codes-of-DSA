#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> team_lineup(n);
        for (long long i = 0; i < n; ++i) {
            cin >> team_lineup[i];
        }

        sort(team_lineup.begin(), team_lineup.end());
        team_lineup.erase(unique(team_lineup.begin(), team_lineup.end()), team_lineup.end());

        long long cost = 0, next_missing = 1;

        for (long long jersey : team_lineup) {
            while (next_missing < jersey && k > 0) {
                cost += next_missing;
                next_missing++;
                k--;
            }
            next_missing = jersey + 1;
        }

        while (k > 0) {
            cost += next_missing;
            next_missing++;
            k--;
        }

        cout << cost << "\n";
    }

    return 0;
}
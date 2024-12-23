#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findTargetIndices(const vector<int>& arr, int target) {
    vector<int> sortedArr = arr; // Copy the original array
    sort(sortedArr.begin(), sortedArr.end());

    vector<int> targetIndices;
    for (size_t i = 0; i < sortedArr.size(); ++i) { // Use size_t for the loop variable
        if (sortedArr[i] == target) {
            targetIndices.push_back(i); // 1-based index
        }
    }

    return targetIndices;
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, target;
        cin >> N >> target; // Number of trees and target number of dates

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i]; // Harvest log
        }

        vector<int> result = findTargetIndices(arr, target);

        if (result.empty()) {
            cout << "" << endl; // Empty list
        } else {
            for (size_t i = 0; i < result.size(); ++i) { // Use size_t for the loop variable
                cout << result[i];
                if (i != result.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
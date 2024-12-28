#include <iostream>
#include <vector>
using namespace std;

bool isMagicalScroll(const vector<vector<int>>& matrix, int m, int n) {
    // Check if the matrix is square
    if (m != n) return false;

    // Check the conditions for diagonal and non-diagonal elements
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                // Diagonal element must be non-zero
                if (matrix[i][j] == 0) return false;
            } else {
                // Non-diagonal element must be zero
                if (matrix[i][j] != 0) return false;
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int m, n;
        cin >> m >> n;
        
        vector<vector<int>> matrix(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }

        if (isMagicalScroll(matrix, m, n)) {
            cout << "true\n";
        } else {
            cout << "false\n";
        }
    }

    return 0;
}


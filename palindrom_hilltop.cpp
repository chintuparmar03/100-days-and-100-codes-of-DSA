#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        long int n = s.length();

        if (n ==    1) {
            cout << -1 << endl;
            continue;
        }

        bool modified  =     false;

        for (int i = 0; i < n / 2; ++i) {
            if (s[i] != 'a') {
                s[i] = 'a';
                modified = true;
                break;
            }
        }

        if (!modified) {
            s[n - 1] = 'b';
        }

        cout << s << endl;
    }

    return 0;
}
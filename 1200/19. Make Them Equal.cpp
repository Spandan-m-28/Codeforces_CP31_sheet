#include <bits/stdc++.h>
using namespace std;

bool isAllc(string& s, char c) {
    for (char ch : s) {
        if (ch != c)
            return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    char c;
    cin >> c;

    string s;
    cin >> s;

    // Case 0: already all c
    if (isAllc(s, c)) {
        cout << 0 << "\n";
        return;
    }

    // Case 1: one operation possible
    for (int x = 2; x <= n; x++) {
        bool ok = true;
        for (int i = x; i <= n; i += x) {
            if (s[i - 1] != c) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << 1 << "\n";
            cout << x << "\n";
            return;
        }
    }

    // Case 2: always possible
    cout << 2 << "\n";
    cout << n - 1 << " " << n << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

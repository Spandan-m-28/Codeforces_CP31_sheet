#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int count = 0;

    // Try all base digits 1 to 9
    for (int d = 1; d <= 9; ++d) {
        int val = d;
        // Multiply by 10 until we exceed n
        while (val <= n) {
            count++;
            val *= 10;
        }
    }

    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

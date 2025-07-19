#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    // Try modifying a
    ll reqA = 2 * b - c;
    if (reqA > 0 && reqA % a == 0) {
        cout << "YES\n";
        return;
    }

    // Try modifying b
    ll sumAC = a + c;
    if (sumAC % 2 == 0) {
        ll reqB = sumAC / 2;
        if (reqB > 0 && reqB % b == 0) {
            cout << "YES\n";
            return;
        }
    }

    // Try modifying c
    ll reqC = 2 * b - a;
    if (reqC > 0 && reqC % c == 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
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

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double big; // only works with g++, skip for MSVC

void solve() {
    ll n, c;
    cin >> n >> c;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll left = 0, right = 1000000000;
    while (left <= right) {
        ll w = left + (right - left) / 2;

        long double temp = 0; // use long double instead of __int128
        for (auto x : arr) {
            long double val = (long double)x + 2.0L * w;
            temp += val * val;
            if (temp > (long double)c) break; // early exit to avoid useless overflow
        }

        if (fabsl(temp - c) < 1e-6) { // floating point equality check
            cout << w << "\n";
            return;
        } else if (temp < c) {
            left = w + 1;
        } else {
            right = w - 1;
        }
    }
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

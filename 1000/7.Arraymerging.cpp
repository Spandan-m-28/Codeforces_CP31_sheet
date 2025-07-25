#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    unordered_map<ll, ll> countA, countB;

    // Calculate max streaks in a
    ll tempA = 1;
    countA[a[0]] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            tempA++;
        else
            tempA = 1;
        countA[a[i]] = max(countA[a[i]], tempA);
    }

    // Calculate max streaks in b
    ll tempB = 1;
    countB[b[0]] = 1;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
            tempB++;
        else
            tempB = 1;
        countB[b[i]] = max(countB[b[i]], tempB);
    }

    ll ans = 0;
    for (auto &it : countA)
    {
        ll val = it.first;
        ll cntA = it.second;
        ans = max(ans, cntA + countB[val]);
    }

    for (auto &it : countB)
    {
        ll val = it.first;
        ll cntB = it.second;
        if (countA.find(val) == countA.end())
        {
            ans = max(ans, cntB);
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        if (!(cin >> n))
            return 0;
        vector<vector<ll>> tri(n);
        for (int i = 0; i < n; ++i)
        {
            tri[i].resize(i + 1);
            for (int j = 0; j <= i; ++j)
                cin >> tri[i][j];
        }
        int P;
        cin >> P;
        if (P <= 0)
        { // invalid but guard
            cout << -1 << '\n';
            return 0;
        }

        // dp[i][j] : unordered_map<remainder, best_sum>
        vector<vector<unordered_map<int, ll>>> dp(n);
        for (int i = 0; i < n; ++i)
            dp[i].resize(i + 1);
        // base
        {
            ll v = tri[0][0];
            int r = (int)((v % P + P) % P);
            dp[0][0][r] = v;
        }

        // transitions
        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                ll val = tri[i][j];
                // from (i-1, j-1)
                if (j > 0)
                {
                    for (const auto &kv : dp[i - 1][j - 1])
                    {
                        int prev_r = kv.first;
                        ll prev_sum = kv.second;
                        ll new_sum = prev_sum + val;
                        int new_r = (int)((new_sum % P + P) % P);
                        auto it = dp[i][j].find(new_r);
                        if (it == dp[i][j].end() || it->second < new_sum)
                            dp[i][j][new_r] = new_sum;
                    }
                }
                // from (i-1, j)
                if (j < i)
                {
                    for (const auto &kv : dp[i - 1][j])
                    {
                        int prev_r = kv.first;
                        ll prev_sum = kv.second;
                        ll new_sum = prev_sum + val;
                        int new_r = (int)((new_sum % P + P) % P);
                        auto it = dp[i][j].find(new_r);
                        if (it == dp[i][j].end() || it->second < new_sum)
                            dp[i][j][new_r] = new_sum;
                    }
                }
            }
        }

        // answer: best dp at bottom row with remainder 0
        ll ans = LLONG_MIN;
        for (int j = 0; j < n; ++j)
        {
            auto it = dp[n - 1][j].find(0);
            if (it != dp[n - 1][j].end())
                ans = max(ans, it->second);
        }
        if (ans == LLONG_MIN)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }

    return 0;
}

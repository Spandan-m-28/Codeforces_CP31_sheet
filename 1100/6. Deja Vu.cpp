#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> x(q);
    for (ll i = 0; i < q; i++)
    {
        cin >> x[i];
    }

    for (ll i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            for (ll j = 0; j < q; j++)
            {
                if (arr[i] % (1LL << x[j]) == 0)
                {
                    arr[i] += (1LL << (x[j] - 1));
                }
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
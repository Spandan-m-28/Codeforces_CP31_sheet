#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (arr[i] >= arr[i + 1] && arr[i] > 0)
        {
            arr[i] = floor(arr[i] / 2);
            counter++;
        }
        if (arr[i] >= arr[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << counter << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int zeroCounter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            zeroCounter++;
    }
    if (zeroCounter == n)
    {
        cout << 0 << endl;
        return;
    }
    int left = 0, right = n - 1;
    while (left < n && arr[left] == 0)
        left++;
    while (right >= 0 && arr[right] == 0)
        right--;

    for (int i = left; i <= right; i++)
    {
        if (arr[i] == 0)
        {
            cout << 2 << endl;
            return;
        }
    }
    cout << 1 << endl;
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
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;        // Fix: Read n and k properly
    string s;
    cin >> s;             // Fix: Now read string s

    int white = 0;
    int l = 0, r = 0;

    // First window of size k
    while (r < k)
    {
        if (s[r] == 'W')
            white++;
        r++;
    }

    int minWhite = white;

    // Slide the window
    while (r < n)
    {
        if (s[l] == 'W')
            white--;
        l++;
        if (s[r] == 'W')
            white++;
        r++;
        minWhite = min(minWhite, white);
    }

    cout << minWhite << endl;
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

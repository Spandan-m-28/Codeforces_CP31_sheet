#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxi = 1;
    int temp = 1;
    for (int i = 1; i < n; i++)
    {
        if(s[i] == s[i - 1]){
            temp++;
            maxi = max(maxi,temp);
        }else{
            temp = 1;
        }
    }

    cout << maxi + 1 << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
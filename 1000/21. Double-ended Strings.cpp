#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string a,b;
    cin >> a >> b;
    int n = a.length(),m = b.length();
    
    vector<vector<int>> dp(n + 1,vector<int>(m + 1 ,0));
    int ans = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if(a[i - 1] == b[j - 1]){
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(ans,dp[i][j]);
            }else
                dp[i][j] = 0;
        }
    }

    cout << n + m - ans - ans << endl; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
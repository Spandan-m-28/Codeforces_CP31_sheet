#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n,m;
    cin >> n >> m;

    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    
    vector<ll>rem(m);
    for(int i = 0;i < n;i++){
        rem[arr[i] % m]++;
    }

    long long ans = 0;
    for(int i = 0;i < m;i++){
        ll x = rem[i],y = rem[(m - i) % m];

        if((x == 0) and (y == 0))continue;

        ll tmp = min(x,y);

        x -= min(tmp + 1,x);
        y -= min(tmp + 1,y);
        ans++;

        ans += (x + y);

        rem[i] = 0;
        rem[(m - i) % m] = 0;
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
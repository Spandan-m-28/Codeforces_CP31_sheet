#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    ll n,k;
    cin >> n >> k;

    // vector<ll> arr(n);
    // for(int i = 0;i < n;i++){
    //     cin >> arr[i];
    // }

    int ans = 1;
    for(int i = 0;i < k;i++){
        ans = ans * n % mod;
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
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
    }

    unordered_map<ll,ll> mpp;
    for(ll i = 0;i < n;i++){
        mpp[arr[i] - i + 1]++;
    }

    ll ans = 0;
    for(auto& it : mpp){
        ans += (it.second * (it.second - 1)) / 2;
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
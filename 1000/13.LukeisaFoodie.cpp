#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n ,x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    vector<pair<ll,ll>> segment(n);
    for(int i = 0;i < n;i++){
        segment[i] = {arr[i] - x,arr[i] + x};
    }
    
    ll ans = 0;
    ll l = segment[0].first;
    ll r = segment[0].second;
    for(int i = 0;i < n;i++){
        l = max(l,segment[i].first);
        r = min(r,segment[i].second);
        if(l > r){
            ans++;
            l = segment[i].first;
            r = segment[i].second;
        }
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
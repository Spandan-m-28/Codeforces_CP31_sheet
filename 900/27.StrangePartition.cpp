#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n,x;
    cin >> n >> x;
    vector<ll> arr(n);
    ll sum = 0;
    ll max = 0;
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
        max += ceil((arr[i] * 1.0)/x);
        sum += arr[i];
    }
    ll min = ceil((sum * 1.0) / x);
    cout << min << " " << max << endl;
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
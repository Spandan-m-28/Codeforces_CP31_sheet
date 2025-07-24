#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n,k ,q;
    cin >> n >> k >> q;
    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    ll ans = 0;
    ll left = 0,right = 0;
    while(right < n){
        if(arr[right] <= q){
            right++;
        }else{
            if(right - left >= k){
                ll ways = (((right - left) - k + 1) * ((right -left) - k + 2)) / 2;
                ans += ways;
            } 
            right++;
            left = right;
        }
    }

    //Processing the final segment
    int L = right - left;  
    if(L >= k){
        ll ways = ll(L - k + 1) * (L - k + 2) / 2;
        ans += ways;
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
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    ll ans = INT_MAX;
    ll even_count = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] % 2== 0){
            even_count++;
        }
        if(arr[i] % k == 0){
            ans = 0;
        }
        ans = min(ans,ll(k - arr[i] % k));
    }
    if(k == 4){
        if(even_count >= 2){
            ans = min(ans,0LL);
        }else if(even_count == 1){
            ans = min(ans,1LL);
        }else if(even_count == 0){
            ans = min(ans,2LL);
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
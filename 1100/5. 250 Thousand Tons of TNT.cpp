#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    vector<ll> prefixSum(n); // long long
    prefixSum[0] = arr[0];
    for(int i = 1;i < n;i++){
        prefixSum[i] = arr[i] + prefixSum[i - 1];
    }

    ll ans = 0; // long long
    for(int k = 1;k < n;k++){
        if(n % k != 0)
            continue;
        ll maxi = LLONG_MIN, mini = LLONG_MAX; // long long
        for(int i = k - 1;i < n;i += k){
            if(i - k >= 0){
                maxi = max(maxi,prefixSum[i] - prefixSum[i - k]);
                mini = min(mini,prefixSum[i] - prefixSum[i - k]);
            }else{
                maxi = max(maxi,prefixSum[i]);
                mini = min(mini,prefixSum[i]);
            }
        }

        ans = max(ans,maxi - mini);
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

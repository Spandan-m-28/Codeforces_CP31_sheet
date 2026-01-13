#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);
    unordered_map<ll,ll> lastSeenIndex;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        lastSeenIndex[arr[i]] = i + 1;
    }

    ll maxSum = 0;
    for(int i = 1;i <= 1000;i++){
        for(int j = 1;j <= 1000;j++){
            if(__gcd(i,j) == 1){
                if(lastSeenIndex.find(i) != lastSeenIndex.end() && lastSeenIndex.find(j) != lastSeenIndex.end()){
                    maxSum = max(maxSum,lastSeenIndex[i] + lastSeenIndex[j]);
                }
            }
        }
    }

    if(maxSum == 0){
        cout << -1 << endl;
    }else{
        cout << maxSum << endl;
    }
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
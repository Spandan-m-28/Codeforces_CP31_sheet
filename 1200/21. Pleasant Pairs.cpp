#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    vector<pair<ll,ll>> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(),arr.end());

    int ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i].first * arr[j].first >= 2 * n){
                break;
            }

            if(arr[i].first * arr[j].first == arr[i].second + arr[j].second){
                ans++;
            }
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
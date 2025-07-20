#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll zeros = 0, ones = 0;
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
        if(arr[i] == 0){
            zeros++;
        }
        else if(arr[i] == 1){
            ones++;
        }  
    }
    cout << ll(ones * pow(2,zeros)) << endl;
    return;
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
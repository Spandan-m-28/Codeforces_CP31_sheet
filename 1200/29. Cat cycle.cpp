#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    ll n,k;
    cin >> n >> k;

    k--;

    // vector<ll> arr(n);
    // for(int i = 0;i < n;i++){
    //     cin >> arr[i];
    // }

    if(n % 2 == 0){
        cout << (k % n) + 1 << endl;
    }else{
        cout << ((k + (k / (n/2))) % n) + 1 << endl;
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
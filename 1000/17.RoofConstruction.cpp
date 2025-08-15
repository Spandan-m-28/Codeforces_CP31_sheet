#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    n--;
    ll msb = log2(n);
    vector<ll> ans;
    ll num = pow(2,msb -1);
    while(num >= 0){
        ans.push_back(num);
        num--;
    }
    num = pow(2,msb);
    while(num <= n){
        ans.push_back(num);
        num++;
    }

    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;
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
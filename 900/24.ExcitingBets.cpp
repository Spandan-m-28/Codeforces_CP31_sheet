#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void solve(){
    ll a,b;
    cin >> a >> b;
    if(a == b){
        cout << 0 << " " << 0 << endl;
        return;
    }
    if(b > a){
        swap(a,b);
    }
    ll gcd = a - b;
    ll ans = min(b % gcd,gcd - b % gcd);
    cout << gcd << " " << ans << endl;
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
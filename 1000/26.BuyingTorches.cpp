#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ceil_division(ll a, ll b) {
    return (a + b - 1) / b;
}

void solve(){
    ll x,y,k;
    cin >> x >> y >> k;

    ll sticks_gained_per_trade = x - 1;
    ll sticks_needed = k * y + k - 1;

    ll trades = 0;
    trades += ceil_division(sticks_needed,sticks_gained_per_trade);
    trades += k;

    cout << trades << endl;
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
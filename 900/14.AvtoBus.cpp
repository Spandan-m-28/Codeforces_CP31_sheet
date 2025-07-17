#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve(){
    ll n;
    //n means no of wheels
    cin >> n;

    if(n < 4 || n % 2 != 0){
        cout << -1 << endl;
    }else{
        ll min_buses = ceil(n * 1.0 / 6); 
        ll max_buses = n / 4;
        cout << min_buses << " " << max_buses << endl;
    }
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
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isFair(ll n){
    ll tp = n;
    while(tp != 0){
        int digit = tp % 10;
        if (digit != 0 && n % digit != 0)
            return false;
        
        tp = tp / 10;
    }

    return true;
}

void solve(){
    ll n;
    cin >> n;

    while(n){
        if(isFair(n)){
            cout << n << endl;
            break;
        }
        n++;
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
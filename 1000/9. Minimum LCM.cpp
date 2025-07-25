#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin >> n;

    ll ansA = 1, ansB = n - 1;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            ansA = n / i;
            ansB = n - ansA;
            break;
        }
    }
    cout << ansA << " " << ansB << endl;
    
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
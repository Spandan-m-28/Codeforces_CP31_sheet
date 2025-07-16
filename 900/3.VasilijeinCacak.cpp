#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin >> n >> k >> x;
    long long sumFirst = (k * (k + 1)) / 2;
    long long sumLast = (k*(2*n - k + 1)) / 2;
    if(x <= sumLast && x >= sumFirst){
        cout << "YES" << endl;
        return ;
    }
    cout << "NO" << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
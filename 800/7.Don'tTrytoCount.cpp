#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m;
    cin >> n >> m;
    string x,s;
    cin >> x;
    cin >> s;

    int ans = 0;
    while(x.size() < n + m){
        if(x.find(s) != string::npos){
            cout << ans << endl;
            return;
        }
        ans++;
        x += x;
    }

    if (x.find(s) != string::npos) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
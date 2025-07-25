#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    s = s + s;
    ll maxDistance = 0;
    ll idx = -1;
    for(ll i = (2 * n) - 1;i >= 0;i--){
        if(s[i] == 'g')
            idx = i;
        if(s[i] == c && idx != -1){
            maxDistance = max(maxDistance,idx - i);
        }
    }
    cout << maxDistance << endl;
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
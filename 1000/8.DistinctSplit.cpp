#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char,ll> mapBack,mapFront;
    for(auto c : s){
        mapBack[c]++;
    }

    ll ans = 0;
    for(int i = 0;i < n;i++){
        mapBack[s[i]]--;
        if(mapBack[s[i]] == 0){
            mapBack.erase(s[i]);
        }
        mapFront[s[i]]++;

        ans = max(ans,ll(mapFront.size() + mapBack.size()));
    }
    cout << ans << endl;
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
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char,int> freq;
    vector<int> prefix;

    for(int i = 0;i < n;i++){
        freq[s[i]]++;
        prefix.push_back(freq.size());
    }

    ll ans = 1;

    for(int i = 1;i < n;i++){
        ans += prefix[i];
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
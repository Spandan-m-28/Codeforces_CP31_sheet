#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin >> s;
    int zeros = 0,ones = 0;
    for(auto ch : s){
        if(ch == '0'){
            zeros++;
        }else{
            ones++;
        }
    }
    int ans = 0;
    int n = s.length();
    for(int i = 0;i < n;i++){
        if(s[i] == '0' && ones > 0){
            ones--;
        }else if(s[i] == '1' && zeros > 0){
            zeros--;
        }else{
            ans += ones + zeros;
            break;
        }
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
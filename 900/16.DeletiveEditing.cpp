#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s,t;
    cin >> s >> t;
    int n = s.length();
    unordered_map<char,int> mpp;
    for(auto ch : t){
        mpp[ch]++;
    }
    for(int i = n - 1;i >= 0;i--){
        if(mpp.find(s[i]) != mpp.end()){
            mpp[s[i]]--;
            if(mpp[s[i]] == 0)mpp.erase(s[i]);
        }else{
            s[i] = '.';
        }
    }
    string finalString = "";
    for(auto ch : s){
        if(ch != '.')
            finalString += ch;
    }
    if(finalString == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
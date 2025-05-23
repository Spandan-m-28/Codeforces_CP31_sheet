#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ,k;
    cin >> n >> k;
    string s;
    cin >> s;

    unordered_map<char,int> mpp;
    for(auto c : s){
        mpp[c]++;
    }
    int count = 0;
    for(auto it : mpp){
        if(it.second%2 != 0){
            count++;
        }
    }

    if(count > k + 1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
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
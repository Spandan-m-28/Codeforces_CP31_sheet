#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    string s;
    cin >> s;
    int zeros = 0, ones = 0;
    for(auto ch : s){
        if(ch == '0'){
            zeros++;
        }else{
            ones++;
        }
    }
    if(zeros > ones){
        zeros = ones;
    }
    if(zeros % 2 == 0){
        cout << "NET" << endl;
    }else{
        cout << "DA" << endl;
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
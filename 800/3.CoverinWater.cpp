#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n;

    string s;
    cin >> s;
    int count = 0;
    for(auto ch : s){
        if(ch == '.'){
            count++;
        }
    }

    for(int i = 1;i < n - 1;i++){
        if(s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.'){
            cout << 2 << endl;
            return;
        }
    }

    cout << count << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
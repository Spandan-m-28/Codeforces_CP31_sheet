#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n ;
    cin >> n;
    string s;
    cin >> s;

    int tp = 0,curr = 0;;
    for(int i = 0;i < n;i++){
        if(s[i] == ')'){
            curr--;
        }else{
            curr++;
        }

        tp = min(tp,curr);
    }

    cout << abs(tp) << endl;
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
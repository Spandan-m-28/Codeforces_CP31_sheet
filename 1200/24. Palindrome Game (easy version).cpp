#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    ll n;
    cin >> n;

    // vector<ll> arr(n);
    // for(int i = 0;i < n;i++){
    //     cin >> arr[i];
    // }

    string s;
    cin >> s;

    ll zeros = 0;
    for(auto c : s){
        if(c == '0')
            zeros++;
    }

    if(zeros == 1 || zeros % 2 == 0){
        cout << "BOB" << endl;
    }else{
        cout << "ALICE" << endl;
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
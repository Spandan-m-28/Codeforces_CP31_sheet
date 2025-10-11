#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n,l,r;
    cin >> n >> l >> r;

    // vector<ll> arr(n);
    // for(int i = 0;i < n;i++){
    //     cin >> arr[i];
    // }

    if(r - l + 1 >= n){
        cout << "YES" << endl;
        int count = 0;
        for(int i = l;count < n;i++){
            cout << i << " ";
            count++;
        }
        cout << endl;
    }else{
        cout << "NO" << endl;
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
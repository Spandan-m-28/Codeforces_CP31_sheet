#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ,k;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < n;i++){
        if(arr[i] == k){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    map<int,int> mpp;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 1){
            cout << -1 << endl;
            return;
        }
    }

    int tp = 1;
    for(int i = 0;i < n - 1;i++){
        if(arr[i] == arr[i + 1]){
            cout << i + 2 << " ";
        }else{
            cout << tp << " " ;
            tp = i + 2;
        }
    }

    cout << tp << endl;
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
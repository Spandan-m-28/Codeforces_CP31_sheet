#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    if(is_sorted(arr.begin(),arr.end())){
        cout << 0 << endl;
        return;
    }

    for(int i = 0;i < n - 2;i++){
        arr[i] = arr[n - 2] - arr[n - 1];
    }

    if(is_sorted(arr.begin(),arr.end())){
        cout << n - 2 << endl;
        for(int i = 0;i < n - 2;i++){
            cout << i + 1 << " " << n - 1 << " " << n << endl;
        }
    }else{
        cout << -1 << endl;
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
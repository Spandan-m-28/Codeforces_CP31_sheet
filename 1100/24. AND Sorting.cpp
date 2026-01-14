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

<<<<<<< HEAD
    
=======
    int Xor = INT_MAX;
    for(int i = 0;i < n;i++){
        if(arr[i] != i){
            Xor = Xor & arr[i];
        }
    }
    
    cout << Xor << endl;
>>>>>>> 3d8579f3493d398ff9de028dfbdaee07efe52662
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
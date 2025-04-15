#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    long long Xor = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        Xor ^= arr[i];
    }

    if(n % 2 == 0){
        if(Xor == 0){
            cout << 0 << endl;
        }else{
            cout << -1 << endl;
        }
    }else{
        if(Xor == 0){
            cout << 0 << endl;
        }else{
            cout << Xor << endl;
        }
    }
    return;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
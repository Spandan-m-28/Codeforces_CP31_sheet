#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    int k = abs(arr[0] - 1);
    for(int i = 1;i < n;i++){
        k = gcd(k,abs(arr[i] - (i + 1)));
    }
    cout << k << endl;
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
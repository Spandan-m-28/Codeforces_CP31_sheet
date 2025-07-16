#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,n;
    cin >> a >> b >> n;
    vector<int> arr(n);
    long long sum = b;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        sum += min(a - 1, (long long)arr[i]);
    }
    cout << sum << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
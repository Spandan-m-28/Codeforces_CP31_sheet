#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    long long sum = 0;
    for(int i = 0;i < n - 1;i++){
        cin >> arr[i];
        sum += (long long)arr[i];
    }
    cout << -1 * sum << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
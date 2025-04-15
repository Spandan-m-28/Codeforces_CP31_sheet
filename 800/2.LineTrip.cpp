#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ,x;
    cin >> n >> x;

    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    int ans = 0;
    ans = max(ans,arr[0]);
    for(int i = 1;i < n;i++){
        ans = max(ans,arr[i] - arr[i - 1]);
    }

    ans = max(ans,2 * (x - arr[n - 1]));

    cout << ans << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int ans = INT_MAX;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        ans = min(abs(arr[i]),ans);
    }
    cout << ans << endl;

}

int main(){

    solve();
    

    return 0;
}
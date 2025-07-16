#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    int left = 0,right = 1;
    int ans = 0;
    while(right < n){
        if(arr[right] - arr[right - 1] > k){
            ans = max(ans,right - left + 1);
            left = right;
        }
        right++;
    }

    cout << n - left << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
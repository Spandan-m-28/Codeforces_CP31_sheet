#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    long long operations = INT_MAX;
    for(int i = 0;i < n - 1;i++){
        if(arr[i] <= arr[i + 1]){
            long long diff = arr[i + 1] - arr[i];
            long long req = diff / 2 + 1;
            operations = min(req,operations);
        }else{
            operations = 0;
        }
    }
    cout << operations << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int maxi = 0,mini = INT_MAX;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        maxi = max(maxi,arr[i]);
        mini = min(mini,arr[i]);
    }
    int difference = arr[n - 1] - arr[0];
    //arr[0] if fixed
    difference = max(difference,maxi - arr[0]);
    //arr[n - 1] is fixed
    difference = max(difference,arr[n - 1] - mini);
    //cyclic wala case
    for(int i = 0;i < n - 1;i++){
        difference = max(difference,arr[i] - arr[i + 1]);
    }

    cout << difference << endl;
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
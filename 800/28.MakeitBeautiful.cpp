#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[0] == arr[n - 1]){
        cout << "NO" <<endl;
    }else{
        cout << "YES" << endl;
        cout << arr[n - 1] << " " << arr[0] << " ";
        for(int i = 1;i < n - 1;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
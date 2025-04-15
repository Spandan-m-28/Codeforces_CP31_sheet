#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ,k;
    cin >> n >> k;
    vector<int> arr(n);

    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    if(k == 1){
        if(is_sorted(arr.begin(),arr.end())){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        return;
    }

    cout << "YES" << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
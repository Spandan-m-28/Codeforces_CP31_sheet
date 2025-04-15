#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    int count = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(arr[i] % 2 != 0)count++;
    }
    if(count % 2 != 0){
        cout << "NO"<< endl;
        return;
    }else{
        cout << "YES" << endl;
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
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int twos = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        if(arr[i] == 2)twos++;
    }
    int count = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] == 2){
            count++;
            twos--; 
        }
        if(count == twos){
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
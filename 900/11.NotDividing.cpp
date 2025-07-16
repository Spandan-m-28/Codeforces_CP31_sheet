#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    if(arr[0] == 1){
        arr[0] = 2;
    }
    cout << arr[0] << " " ;
    for(int i = 1;i < n;i++){
        if(arr[i] == 1)arr[i]++;
        if(arr[i] % arr[i - 1] == 0){
            arr[i]++;
            while (arr[i] % arr[i - 1] == 0) {
                arr[i]++;
            }
        }
        cout << arr[i] << " ";
    }
    cout << endl;
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
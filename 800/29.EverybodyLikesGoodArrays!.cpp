#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    int count = 0;
    for(int i = 0;i < n - 1;i++){
        if(arr[i] % 2 == 0 && arr[i + 1] % 2 == 0)count++;
        else if(arr[i] % 2 != 0 && arr[i + 1] % 2 != 0)count++;
    }

    cout << count << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
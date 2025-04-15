#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int count = 0;
    int temp = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] == 0){
            temp++;
            count = max(temp,count);
        }else{
            temp = 0;
        }
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
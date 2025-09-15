#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int Maxans = INT_MIN;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        Maxans = max(Maxans,arr[i]);
    }

    vector<int> ans(n);
    ans[0] = arr[0];
    for(int i = 1;i < n;i++){
        //same parity
        if((arr[i] % 2 == 0 && arr[i - 1] % 2 == 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 != 0)){
            ans[i] = arr[i];
        }else{
            ans[i] = max(arr[i],arr[i] + ans[i - 1]);
        }
    }

    for(int i = 0;i < n;i++){
        Maxans = max(Maxans,ans[i]);
    }

    cout << Maxans << endl;
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
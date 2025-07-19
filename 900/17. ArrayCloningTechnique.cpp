#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int,int> mpp;
    int maxi = 1;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
        maxi = max(maxi,mpp[arr[i]]);
    }
    int operations = 0;
    while(maxi < n){
        operations++;
        if(maxi * 2 <= n){
            operations += maxi;
            maxi = maxi * 2;
        }
        else{
            operations += n - maxi;
            maxi = n;
        }
    }
    cout << operations << endl;
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
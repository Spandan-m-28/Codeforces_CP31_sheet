#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int bitwiseAnd = INT_MAX;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
        bitwiseAnd = bitwiseAnd & arr[i];
    }
    cout << bitwiseAnd << endl;
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
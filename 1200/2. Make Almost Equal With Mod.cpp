#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    for(int i = 1;i <= 60;i++){
        set<ll> distinctValues;

        for(int j = 0;j < n;j++){
            distinctValues.insert(arr[j] % (1LL << i));
        }

        if(distinctValues.size() == 2){
            cout << (1LL << i) << endl;
            return;
        }
    }
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
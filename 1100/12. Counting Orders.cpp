#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll MOD = 1000000007;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    int minia = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        minia = max(minia,a[i]);
    }
    int minib = 0;
    for(int i = 0;i < n;i++){
        cin >> b[i];
        minib = min(minib,b[i]);
    }

    if(minia <= minib){
        cout << 0 << endl;
    }else{
        sort(b.rbegin(),b.rend());
        sort(a.begin(),a.end());

        ll result = 1;
        for(int i = 0;i < n;i++){
            ll temp = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
            ll count = a.size() - temp;
            result = result * max(count - i,0LL) % MOD;
        }        

        cout << result << endl;
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
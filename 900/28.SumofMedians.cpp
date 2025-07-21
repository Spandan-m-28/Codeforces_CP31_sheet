#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n * k);
    for(int i = 0;i < n * k;i++){
        cin >> arr[i];
    }

    int median = ceil(n * 1.0 / 2);
    int howManyToSkip = n - median;
    int temp = howManyToSkip;
    int count = 0;
    ll ans = 0;
    for(int i = (n * k) - 1;i >= 0;i--){
        if(temp == 0){
            ans += arr[i];
            temp = howManyToSkip;
            count++;
            if(count == k)
                break;
        }else{
            temp--;
        }
    }
    cout << ans << endl;
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
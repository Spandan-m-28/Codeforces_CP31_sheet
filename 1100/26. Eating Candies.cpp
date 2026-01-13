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

    if(n == 1){
        cout << 0 << endl;
        return;
    }

    ll maxCandies = 0;
    ll left = 0,right = n - 1;
    ll sumLeft = 0,sumRight = 0;
    while(left <= right){
        if(sumLeft == sumRight){
            maxCandies = left + (n - 1 - right);
        }

        if(sumLeft <= sumRight){
            sumLeft += arr[left];
            left++;
        }else{
            sumRight += arr[right];
            right--;
        }
    }

    if(sumLeft == sumRight){
        maxCandies = left + (n - 1 - right);
    }

    cout << maxCandies << endl;
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
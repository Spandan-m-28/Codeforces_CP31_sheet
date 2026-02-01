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

    vector<pair<ll,ll>> a(n);
    for(int i = 0;i < n;i++){
        a[i] = {arr[i],i + 1};
    }

    sort(a.begin(),a.end());

    int left = 0;
    int right = n - 1;
    if(a[left].first == a[right].first){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    // This int contains city that has no same gang as that of left
    ll notSameGang = -1;
    while(left < right){
        if(a[left].first != a[right].first){
            cout << a[left].second << " " << a[right].second << endl;
            if(notSameGang == -1)
                notSameGang = a[right].second;
            right--;
        }else{
            break;
        }
    }

    left++;
    while(left <= right){
        cout << a[left].second << " " << notSameGang << endl;
        left++;
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
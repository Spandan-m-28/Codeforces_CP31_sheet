#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

bool check(vector<ll> arr,ll x){
    int n = arr.size();
    vector<ll> tp;
    
    //removing all x and creating a new array
    for(int i = 0;i < n;i++){
        if(arr[i] != x){
            tp.push_back(arr[i]);
        }
    }

    int m = tp.size();
    //checking if the new array formed is palindromic or not
    for(int i = 0; i < m;i++){
        if(tp[i] != tp[m - i - 1])
            return false;
    }

    return true;
}

void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    for(int i = 0;i < n;i++){
        if(arr[i] != arr[n - i - 1]){
            //string is non-palindromic
            if(check(arr,arr[i]) || check(arr,arr[n - i - 1])){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
            return;
        }
    }

    cout << "YES" << endl;
    return;
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
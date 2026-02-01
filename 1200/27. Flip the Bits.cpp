#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mod = 1e9 + 7;

void solve(){
    int n;
    cin >> n;

    // vector<ll> arr(n);
    // for(int i = 0;i < n;i++){
    //     cin >> arr[i];
    // }

    string a,b;
    cin >> a;
    cin >> b;

    vector<ll> canFlip(n);
    ll ones = 0;
    ll zeros = 0;
    for(ll i = 0;i < n;i++){
        if(a[i] == '0')
            zeros++;
        else
            ones++;
        
        if(zeros == ones)
            canFlip[i] = true;
    }

    bool isFlipped = false;
    bool isPoss = true;

    for(int i = n - 1;i >= 0;i--){
        if(isFlipped == false){
            if(a[i] != b[i]){
                if(canFlip[i]){
                    isFlipped ^= true;
                }else{
                    isPoss = false;
                    break;
                }
            }
        }else{
            if(a[i] == b[i]){
                if(canFlip[i]){
                    isFlipped ^= true;
                }else{
                    isPoss = false;
                    break;
                }
            }
        }
    }

    if(isPoss){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
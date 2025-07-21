#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    int threes = 0,twos = 0;
    while( n > 0 && n % 3 == 0){
        n /= 3;
        threes++;
    }
    while (n > 0 && n % 2 == 0){
        n /= 2;
        twos++;
    }
    if(n > 1 || twos > threes){
        cout << -1 << endl;
    }else{
        cout << threes + (threes - twos) << endl;
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
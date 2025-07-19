#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll start, jumps;
    cin >> start >> jumps;
    ll finalPosition ;

    if(jumps % 4 == 1){
        finalPosition = -jumps;
    }else if(jumps % 4 == 2){
        finalPosition = 1;
    }else if(jumps % 4 == 3){
        finalPosition = jumps + 1;
    }else if(jumps % 4 == 0){
        finalPosition = 0;
    }

    if(start % 2 == 0){
        cout <<  start + finalPosition << endl;
    }else{
        cout << start - finalPosition << endl;
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
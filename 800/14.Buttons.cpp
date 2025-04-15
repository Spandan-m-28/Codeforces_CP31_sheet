#include<bits/stdc++.h>
using namespace std;

void solve(){

    //a -> can be pressed by anna
    //b -> can be pressed by katie
    //c -> can be pressed by both anna or katie

    int a,b,c;
    cin >> a >> b >> c;

    if(c % 2 == 0){
        if(a > b){
            cout << "First" << endl;
            return;
        }else{
            cout << "Second" << endl;
            return;
        }
    }else{
        if(((c + 1)/ 2) + a > (c / 2) + b){
            cout << "First" << endl;
            return;
        }else{
            cout << "Second" << endl;
            return;
        }
    }
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left = 0,right = n - 1;
    while(left < right){
        if(s[left] != s[right]){
            left++;
            right--;
        }else{
            break;
        }
    }
    cout << (s.substr(left,right - left + 1)).length() << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
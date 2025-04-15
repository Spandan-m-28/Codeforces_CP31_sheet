#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int pos = 0, neg = 0, operations = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            pos++;
        }else{
            neg++;
        }
    }

    while(pos < neg || neg % 2 == 1){
        pos++;
        neg--;
        operations++;
    }

    cout << operations << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp; // Read actual input
        mpp[temp]++;
    }

    if (mpp.size() == 1) // All elements are the same
    {
        cout << "Yes" << endl;
        return;
    }

    if (mpp.size() == 2) // Only two distinct elements
    {
        auto it = mpp.begin();
        auto it2 = next(it); // Get the second element

        int count1 = it->second;
        int count2 = it2->second;

        if(count1 == count2){
            cout << "Yes" << endl;
        }else if(n % 2 == 1 && abs(count1 - count2) == 1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        return;
    }

    cout << "No" << endl;
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

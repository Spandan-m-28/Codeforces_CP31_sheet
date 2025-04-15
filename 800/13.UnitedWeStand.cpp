#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    vector<int> nonMax; // To store elements not equal to maximum
    vector<int> maxVals; // To store elements equal to maximum

    for (int i = 0; i < n; i++) {
        if (arr[i] != maxi) {
            nonMax.push_back(arr[i]);
        } else {
            maxVals.push_back(arr[i]);
        }
    }

    // If all elements are maximum, print -1
    if (nonMax.empty()) {
        cout << -1 << endl;
        return;
    }

    cout << nonMax.size() << " " << maxVals.size() << endl;

    for (int val : nonMax) {
        cout << val << " ";
    }

    cout << endl;
    
    for (int val : maxVals) {
        cout << val << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

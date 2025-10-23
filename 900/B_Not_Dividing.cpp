#include <bits/stdc++.h>
using namespace std;


vector<int> solve(int n, vector<int>& arr) {
    vector<int> ans(n);
    ans[0] = (arr[0] == 1 ? 2 : arr[0]);

    for (int i = 1; i < n; i++) {
        int val = arr[i];
        if (val == 1) val = 2;           // handle 1
        if (val % ans[i - 1] == 0) val++; // ensure not divisible
        ans[i] = val;
        arr[i] = val;                     // update for next iteration
    }
    return ans;
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        vector<int> ans = solve(n, arr);

        for (int x : ans) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
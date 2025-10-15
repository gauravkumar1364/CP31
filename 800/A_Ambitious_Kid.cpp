#include <bits/stdc++.h>
using namespace std;



int solve(int n, vector<int> arr) {
    int mini = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini,abs(arr[i]));
    }
    return mini;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << solve(n, arr) << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


long long solve(int n, vector<int> arr) {
    long long ans = 0;
    long long maxans = arr[n-1]-arr[0];
    for (int i = 0; i < n-1; i++)
    {
        ans = arr[n-1]-arr[i];
        maxans = max(ans,maxans);
    }
    for (int i = 1; i < n; i++)
    {
        ans = arr[i]-arr[0];
        maxans = max(ans,maxans);
    }
    for (int i = 0; i < n-1; i++)
    {
        ans = arr[i]-arr[i+1];
        maxans = max(ans,maxans);
    }
    
    return maxans;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        cout << solve(n, arr) << "\n";
    }

    return 0;
}
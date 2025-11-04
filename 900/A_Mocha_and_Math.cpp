#include <bits/stdc++.h>
using namespace std;

int solve(int n,vector<int>& arr) {
    int ans=arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = ans & arr[i];
    }
    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    int n;
    while (t--) {
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<solve(n,arr)<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int solve(int n,vector<int>& arr) {
    if(n==1) return 0;
    int ans = 0;
    for (int i = n-2; i >= 0; --i)
    {
        if (arr[i]>=arr[i+1])
        {
            while (arr[i] >= arr[i+1] && arr[i] > 0)
            {
                arr[i] = arr[i]/2;
                ans++;
            }
            if (arr[i] == arr[i + 1]) return -1;
        }
        
    }
    return ans;  
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << solve(n, arr) << "\n";
    }

    return 0;
}
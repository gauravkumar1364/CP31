#include <bits/stdc++.h>
using namespace std;


int solve(int n, vector<int>& arr) {
    int ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]==arr[i+1]) return ans;
    }
    

    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    int n;
    vector <int> arr;
    while (t--) {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        cout<<solve(n,arr)<<endl;
    }

    return 0;
}
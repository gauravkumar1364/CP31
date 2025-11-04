#include <bits/stdc++.h>
using namespace std;

long long solve(int n, vector<int> arr) {
    long long ans = 0;
    int one=0,zero=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1) one++;
        else if(arr[i]==0) zero++;
        
    }
    ans = pow(2,zero);
    return one*ans;
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
#include <bits/stdc++.h>
using namespace std;


int solve(int n,int k,vector<int>& arr) {
    vector <int> temp = arr;
    sort(temp.begin(),temp.end());
    int i = 1;
    long long larlen = 1;
    long long ans = 1;
    for(i;i<n;i++){
        if(temp[i]-temp[i-1]<=k){
            ans++;
        }
        else{
            ans = 1;
        }
        larlen = max(larlen,ans);
    }
    return n-larlen;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;  // number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << solve(n, k, arr) << "\n";
    }

    return 0;
}
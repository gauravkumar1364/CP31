#include <bits/stdc++.h>
using namespace std;


int solve(int n,int k,vector<int>& arr) {
    vector <int> temp = arr;
    sort(temp.begin(),temp.end());
    int i = 0,j=1,ans = 0;
    while(i<=n && i<=n-1 && j<=n-1){
        if((j-i)<=k){
            i++;
            j++;
        }
        else{
            i=j;
            j++;
            ans++;
        }
    }
    return ans;
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
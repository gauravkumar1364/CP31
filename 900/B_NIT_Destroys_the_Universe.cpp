#include <bits/stdc++.h>
using namespace std;


int solve(int n,vector<int> arr) {
    int i = 0 ;
    bool inseg = false;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      if(arr[i]!=0 && inseg == false){
        ans++;
        inseg = true;
      }
      else if(arr[i]==0){
        inseg = false;
      }
    }
    return min(ans,2);
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
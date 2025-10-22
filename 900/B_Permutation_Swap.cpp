#include <bits/stdc++.h>
using namespace std;


int solve(int n,vector<int> arr) {
    int k=0;
    for(int i=0;i<n;i++){
        k=gcd(k,arr[i]-(i+1));
    }
    return k;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << solve(n, arr) << "\n";
    }

    return 0;
}
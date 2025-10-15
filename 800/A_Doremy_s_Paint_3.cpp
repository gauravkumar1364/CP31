#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

string solve(int n, vector<int>& arr) {
    int k = arr[0] + arr[1];
    unordered_map<int,int> mp;
    mp.push(arr[0],)
    for (int i = 2; i < n - 1; i++) {
        if (arr[i] + arr[i + 1] != k)
            return "No";
    }
    return "Yes";
}

int32_t main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n, a) << endl;  
    }

    return 0;
}
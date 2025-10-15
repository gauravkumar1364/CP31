#include <bits/stdc++.h>
using namespace std;


string solve(int n,int sub, vector<int> arr) {
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==sub) return "YES";
    }
    return "NO";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, sub;
        cin >> n >> sub;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << solve(n, sub, arr) << "\n";
    }

    return 0;
}
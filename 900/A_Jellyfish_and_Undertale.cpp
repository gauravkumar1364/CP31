#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long a, b, n;
    cin >> a >> b >> n;
    vector<long long> x(n);
    for (auto &v : x) cin >> v;

    long long ans = b ;  

    for (auto val : x)
        ans += min(a - 1, val);  

    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) solve();

    return 0;
}
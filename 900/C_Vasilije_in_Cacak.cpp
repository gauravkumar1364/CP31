#include <bits/stdc++.h>
using namespace std;


string solve(long long n,long long k, long long x) {
    long long minsum = (k*(k+1))/2;
    long long maxsum = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    
    if(x<=maxsum && minsum<=x) return "YES";
    else return "NO";
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        cout << solve(n, k, x) << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string solution(int l,int r, int k,vector<long long>& prefixsum){
    long long sum = 0;
    long long midsum = (r-l+1)*k;
    long long rangeSum = prefixsum[r] - prefixsum[l - 1];
    long long totalSum = prefixsum.back();
    sum = totalSum-(rangeSum)+midsum ;
    if(sum%2==0) return "NO";
    else return "YES";
}

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<long long> prefixsum(n+1,0);

    for (int i = 1; i <= n; i++)
    {
        prefixsum[i] = prefixsum[i-1]+a[i-1];
    }
    

    while (q--) {
        int l, r;
        long long k;
        cin >> l >> r >> k;
        cout<<solution(l,r,k,prefixsum)<<endl;
        
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
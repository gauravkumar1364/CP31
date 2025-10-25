#include <bits/stdc++.h>
using namespace std;


vector<long long> solve(long long n) {
    vector<long long> ans;
    if(n%2!=0 || n<4) {
        ans.push_back(-1) ;
        return ans;
    } 
    long long mini = n/4;
    long long maxi = (n+5)/6;
 
    ans.push_back(maxi);
    ans.push_back(mini);
    return ans;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  
    cin >> t;  // number of test cases

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> ans = solve(n);

        for (auto x : ans)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
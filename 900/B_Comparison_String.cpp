#include <bits/stdc++.h>
using namespace std;


int solve(int n,string str) {
    int ans = 1,maxans = 1;
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            ans++;
        }
        else{
            ans=1;
        }
        maxans = max(ans,maxans);
    }
    return maxans+1;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        string str;
        cin >> n >> str;

        cout << solve(n, str) << "\n";
    }

    return 0;
}
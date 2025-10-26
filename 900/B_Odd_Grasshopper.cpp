#include <bits/stdc++.h>
using namespace std;


long long solve(long long x,long long n) {
    long long ans = 0;
    if(n%4==0){
        ans = 0;
    }
    else if(n%4==1){
        ans = -n;
    }
    else if(n%4==2){
        ans = 1;
    }
    else if(n%4==3){
        ans = n+1;
    }
    if(x%2!=0) ans = x-ans;
    else ans = ans+x;
    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    long long x, jumps;
    while (t--){
        cin>>x;
        cin>>jumps;
        cout<<solve(x,jumps)<<endl;
    } 

    return 0;
}
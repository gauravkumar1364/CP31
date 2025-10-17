#include <bits/stdc++.h>
using namespace std;


int solve(long long n) {
    long long i = 1;
    while(n%i==0){
        i++;
    }
    return i-1;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--){
        long long x;
        cin>> x;
        cout<<solve(x)<<endl;
    }

    return 0;
}
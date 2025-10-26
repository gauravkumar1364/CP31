#include <bits/stdc++.h>
using namespace std;

string solve(string& str) {
    int n = str.length();
    if(str[0]!=str[n-1]){
        str[n-1] = str[0];
    }
    return str;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    string str;
    while (t--) {
        cin>>str;
        cout<<solve(str)<<endl;
    }

    return 0;
}
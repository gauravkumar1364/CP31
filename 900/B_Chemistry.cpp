#include <bits/stdc++.h>
using namespace std;

string solve(int n,int op,string str){ 
    unordered_map<char, int > mp;
    for (char c : str) 
        if (isalpha(c)) 
            mp[c]++;
    int oddfreq = 0;
    for(auto it : mp){
        if(it.second % 2 != 0)
            oddfreq++;
    }
    if(oddfreq > op+1)
        return "NO";
    else return "YES";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; 

    while (t--) {
        int n, op;
        string str;
        cin >> n >> op >> str;

        cout << solve(n, op, str) << "\n";
    }

    return 0;
}

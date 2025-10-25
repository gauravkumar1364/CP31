#include <bits/stdc++.h>
using namespace std;


int solve(int n, vector<int>& arr) {
    int op = 0;
    int curr = 1;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    } 
    for(auto it : mp){
        curr = max(it.second,curr);
    }
    while (curr<n)
    {
        op++;
        if (curr*2<=n)
        {
            op+=curr;
            curr = curr*2;
        }
        else{
            op+=n-curr;
            curr = n;
        }
    }
    return op;
    
}  

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    int n;
    while (t--) {
        cin>>n;
        vector <int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        cout<<solve(n,arr)<<endl;
    }

    return 0;
}
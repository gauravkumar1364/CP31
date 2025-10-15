#include <bits/stdc++.h>
using namespace std;


int solve(int n,vector<int> arr) {
    int pos=0,neg=0;
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    if(sum>0) return 0-sum;
    else return abs(sum);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 1); // or n elements? depends on input structure
        for (int i = 0; i < n - 1; i++) cin >> arr[i];
        cout<<solve(n, arr)<<endl;
    }

    return 0;
}
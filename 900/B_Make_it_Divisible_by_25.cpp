#include <bits/stdc++.h>
using namespace std;


int solve(string s) {
    vector<string> ends = {"00", "25", "50", "75"};
    int ans = INT_MAX;

    for (auto e : ends) {
        int j = 1, cnt = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == e[j]) {
                j--;
                if (j < 0) {
                    ans = min(ans, cnt);
                    break;
                }
            } else cnt++;
        }
    }

    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    string n;
    while (t--) {
        cin>>n;
        cout<<solve(n)<<endl;
    }

    return 0;
}
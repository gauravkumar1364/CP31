#include <bits/stdc++.h>
using namespace std;

string solution(int n, vector<int>& perm){
    if (perm[0]!=1)
        {
            return "no";
        }
        else return "yes";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string result = solution(n, a);
        cout << result << "\n";
    }

    return 0;
}
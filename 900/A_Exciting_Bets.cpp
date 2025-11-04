#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

void solve(int64 a, int64 b) {
    if (a == b) {
        cout << 0 << " " << 0 << '\n';
        return;
    }
    int64 g = llabs(a - b);                // difference (always positive)
    int64 r = a % g;                       // remainder of a mod g
    int64 steps = min(r, g - r);           // minimal moves to align to multiple of g
    cout << g << " " << steps << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int64 a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int solve(long long a,long long b, long long x_king, long long y_king, long long x_queen, long long y_queen) {
    set<pair<int, int>> king_hits, queen_hits;

    for (int j = 0; j < 4; j++)
    {
        king_hits.insert({x_king + dx[j] * a, y_king + dy[j] * b});
        king_hits.insert({x_king + dx[j] * b, y_king + dy[j] * a});

        // Calculate positions attacked by the knight when placed to attack the queen
        queen_hits.insert({x_queen + dx[j] * a, y_queen + dy[j] * b});
        queen_hits.insert({x_queen + dx[j] * b, y_queen + dy[j] * a});
    }
    int ans = 0; // Variable to store the number of positions where the knight can fork the king and queen
		// Check for common positions in both sets
    for (auto position : king_hits)
        if (queen_hits.find(position) != queen_hits.end())
            ans++;

    return ans;
    
}
#include <bits/stdc++.h>
using namespace std;

int solve(long long a, long long b, long long x_king, long long y_king, long long x_queen, long long y_queen); // declare solve

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;  // Uncomment if multiple test cases
    while (t--) {
        long long a, b, x_king, y_king, x_queen, y_queen;
        cin >> a >> b >> x_king >> y_king >> x_queen >> y_queen;

        cout << solve(a, b, x_king, y_king, x_queen, y_queen) << "\n";
    }

    return 0;
}

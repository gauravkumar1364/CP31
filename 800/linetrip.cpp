#include <bits/stdc++.h>
using namespace std;

int solution(int x,vector<int> arr,int n){
    vector<int> points = {0};
    points.insert(points.end(), arr.begin(), arr.end());
    points.push_back(x);
    int maxdiff = 0;
    for (int i = 1; i < points.size(); i++) {
        maxdiff = max(maxdiff   , points[i] - points[i - 1]);
    }
    maxdiff = max(maxdiff, 2 * (x - arr[n - 1]));

    return maxdiff;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << solution(x, arr, n);
    return 0;
}